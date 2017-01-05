
#pragma once

#include "core/common.h"

DSIM_BEGIN_HEADER

struct dsim_test_context;

struct dsim_test_datagen
{
    void (*example)( struct dsim_test_datagen *self, struct dsim_test_context *ctx, void *data );
    size_t size;
};

void dsim_test_data_example( struct dsim_test_datagen *self, struct dsim_test_context *ctx, void *data );



struct dsim_test_uint_in_range_data
{
    struct dsim_test_datagen base;
    unsigned min_value;
    unsigned max_value;
};

void dsim_test_uint_in_range_data_init( struct dsim_test_uint_in_range_data *self, unsigned size, unsigned min_value, unsigned max_value );



struct dsim_test_array
{
    void *data;
    size_t count;
};

struct dsim_test_array_data
{
    struct dsim_test_datagen base;
    struct dsim_test_datagen *elem;
    size_t min_count;
};

void dsim_test_array_data_init( struct dsim_test_array_data *self, struct dsim_test_datagen *elem, size_t min_count );




unsigned test_gen_uint( struct dsim_test_context *ctx, unsigned min, unsigned max );
void test_gen_array( struct dsim_test_context *ctx, void **ptr, size_t *count, size_t elem_size, size_t min_count );

#define GIVEN_UINT(name,min,max) unsigned name = test_gen_uint( _ctx, min, max );

#define GIVEN_ARRAY(type, name, min_count) \
    type *name##_data; size_t name##_count; \
    test_gen_array( _ctx, (void **)&name##_data, &name##_count, sizeof(type), min_count ); \

DSIM_END_HEADER
