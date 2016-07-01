
#pragma once

#include <stddef.h>
#include <new>
#include <stdexcept>
#include <utility>

#include "DSimCommon.h"

namespace DSim {

class IDataType
{
public:
	virtual ~IDataType() { }

	virtual size_t size() const = 0;
	virtual size_t alignment() const = 0;

	virtual void init( void * data, size_t stride, size_t count ) = 0;
	virtual void move( void * src, void * dst, size_t stride, size_t count ) = 0;
	virtual void swap( void * data, size_t stride, size_t * pairs, size_t pair_count ) = 0;
	virtual void done( void * data, size_t stride, size_t count ) = 0;
};

template<typename T>
class SimpleDataStorage : public IDataType
{
public:
	size_t size() const final { return sizeof(T); }
	size_t alignment() const final { return alignof(T); }

	void init( void * data, size_t stride, size_t count ) final
	{
		checkPointer( data );
		checkStride( stride );

		for( size_t i = 0; i < count; ++i )
			new (&item(data,i*stride)) T();
	}

	void move( void * src, void * dst, size_t stride, size_t count ) final
	{
		checkPointer( src );
		checkPointer( dst );
		checkStride( stride );

		for( size_t i = 0; i < count; ++i )
			item(dst, i*stride) = std::move( item(src, i*stride) );
	}

	void swap( void * data, size_t stride, size_t * pairs, size_t pairCount ) final
	{
		checkPointer( data );
		checkStride( stride );

		for( size_t i = 0; i < pairCount; ++i )
			std::swap( item(data, pairs[2*i+0]*stride),
					   item(data, pairs[2*i+1]*stride) );
	}

	void done( void * data, size_t stride, size_t count ) final
	{
		checkPointer( data );
		checkStride( stride );

		for( size_t i = 0; i < count; ++i )
			item(data,i*stride).~T();
	}

private:
	inline static void checkPointer( void * ptr )
	{
		DSIM_ASSERT( reinterpret_cast<uintptr_t>(ptr) % alignof(T), "Pointer is not properly aligned" );
	}

	inline static void checkStride( size_t stride )
	{
		DSIM_ASSERT( stride >= sizeof(T), "Stride is less than data size" );
		DSIM_ASSERT( stride % alignof(T), "Stride is not multiple of data alignment" );
	}

	inline static T& item( void * data, int offset )
	{
		data = static_cast<char*>(data) + offset;
		return *static_cast<T*>( data );
	}
};

} // namespace DSim