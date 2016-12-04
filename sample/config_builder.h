#ifndef CONFIG_BUILDER_H
#define CONFIG_BUILDER_H

/* Generated by flatcc 0.4.1-pre FlatBuffers schema compiler for C by dvide.com */

#ifndef CONFIG_READER_H
#include "config_reader.h"
#endif
#ifndef FLATBUFFERS_COMMON_BUILDER_H
#include "flatbuffers_common_builder.h"
#endif
#define PDIAGNOSTIC_IGNORE_UNUSED
#include "flatcc/portable/pdiagnostic_push.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif

typedef struct dsim_any_type_union_ref dsim_any_type_union_ref_t;

static const flatbuffers_voffset_t __dsim_numeric_type_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsim_numeric_type, 1)
static const flatbuffers_voffset_t __dsim_struct_field_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsim_struct_field, 3)
static const flatbuffers_voffset_t __dsim_struct_type_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsim_struct_type, 1)
static const flatbuffers_voffset_t __dsim_type_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsim_type, 4)
static const flatbuffers_voffset_t __dsim_column_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsim_column, 2)
static const flatbuffers_voffset_t __dsim_schema_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsim_schema, 2)
static const flatbuffers_voffset_t __dsim_config_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsim_config, 2)
#define __dsim_numeric_type_formal_args , flatbuffers_bool_t v0
#define __dsim_numeric_type_call_args , v0
static inline dsim_numeric_type_ref_t dsim_numeric_type_create(flatbuffers_builder_t *B __dsim_numeric_type_formal_args);
#define __dsim_struct_field_formal_args , flatbuffers_string_ref_t v0, flatbuffers_string_ref_t v1, uint32_t v2
#define __dsim_struct_field_call_args , v0, v1, v2
static inline dsim_struct_field_ref_t dsim_struct_field_create(flatbuffers_builder_t *B __dsim_struct_field_formal_args);
#define __dsim_struct_type_formal_args , dsim_struct_field_vec_ref_t v0
#define __dsim_struct_type_call_args , v0
static inline dsim_struct_type_ref_t dsim_struct_type_create(flatbuffers_builder_t *B __dsim_struct_type_formal_args);
#define __dsim_type_formal_args , flatbuffers_string_ref_t v0, uint8_t v1, dsim_any_type_union_ref_t v3
#define __dsim_type_call_args , v0, v1, v3
static inline dsim_type_ref_t dsim_type_create(flatbuffers_builder_t *B __dsim_type_formal_args);
#define __dsim_column_formal_args , flatbuffers_string_ref_t v0, flatbuffers_string_ref_t v1
#define __dsim_column_call_args , v0, v1
static inline dsim_column_ref_t dsim_column_create(flatbuffers_builder_t *B __dsim_column_formal_args);
#define __dsim_schema_formal_args , flatbuffers_string_ref_t v0, dsim_column_vec_ref_t v1
#define __dsim_schema_call_args , v0, v1
static inline dsim_schema_ref_t dsim_schema_create(flatbuffers_builder_t *B __dsim_schema_formal_args);
#define __dsim_config_formal_args , dsim_type_vec_ref_t v0, dsim_schema_vec_ref_t v1
#define __dsim_config_call_args , v0, v1
static inline dsim_config_ref_t dsim_config_create(flatbuffers_builder_t *B __dsim_config_formal_args);

struct dsim_any_type_union_ref {
    dsim_any_type_union_type_t type;
    union {
        flatbuffers_ref_t _member;
        flatbuffers_ref_t NONE;
        dsim_numeric_type_ref_t numeric_type;
        dsim_struct_type_ref_t struct_type;
    };
};

static inline dsim_any_type_union_ref_t dsim_any_type_as_NONE()
{ dsim_any_type_union_ref_t uref; uref.type = dsim_any_type_NONE; uref._member = 0; return uref; }
static inline dsim_any_type_union_ref_t dsim_any_type_as_numeric_type(dsim_numeric_type_ref_t ref)
{ dsim_any_type_union_ref_t uref; uref.type = dsim_any_type_numeric_type; uref.numeric_type = ref; return uref; }
static inline dsim_any_type_union_ref_t dsim_any_type_as_struct_type(dsim_struct_type_ref_t ref)
{ dsim_any_type_union_ref_t uref; uref.type = dsim_any_type_struct_type; uref.struct_type = ref; return uref; }

__flatbuffers_build_scalar_field(0, flatbuffers_, dsim_numeric_type_is_float, flatbuffers_bool, flatbuffers_bool_t, 1, 1, 0)

static inline dsim_numeric_type_ref_t dsim_numeric_type_create(flatbuffers_builder_t *B __dsim_numeric_type_formal_args)
{
    if (dsim_numeric_type_start(B)
        || dsim_numeric_type_is_float_add(B, v0)) {
        return 0;
    }
    return dsim_numeric_type_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsim_numeric_type, dsim_numeric_type_identifier, dsim_numeric_type_type_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, dsim_struct_field_name)
__flatbuffers_build_string_field(1, flatbuffers_, dsim_struct_field_type)
__flatbuffers_build_scalar_field(2, flatbuffers_, dsim_struct_field_offset, flatbuffers_uint32, uint32_t, 4, 4, 0)

static inline dsim_struct_field_ref_t dsim_struct_field_create(flatbuffers_builder_t *B __dsim_struct_field_formal_args)
{
    if (dsim_struct_field_start(B)
        || dsim_struct_field_name_add(B, v0)
        || dsim_struct_field_type_add(B, v1)
        || dsim_struct_field_offset_add(B, v2)) {
        return 0;
    }
    return dsim_struct_field_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsim_struct_field, dsim_struct_field_identifier, dsim_struct_field_type_identifier)

/* vector has keyed elements */
__flatbuffers_build_table_vector_field(0, flatbuffers_, dsim_struct_type_fields, dsim_struct_field)

static inline dsim_struct_type_ref_t dsim_struct_type_create(flatbuffers_builder_t *B __dsim_struct_type_formal_args)
{
    if (dsim_struct_type_start(B)
        || dsim_struct_type_fields_add(B, v0)) {
        return 0;
    }
    return dsim_struct_type_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsim_struct_type, dsim_struct_type_identifier, dsim_struct_type_type_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, dsim_type_name)
__flatbuffers_build_scalar_field(1, flatbuffers_, dsim_type_size, flatbuffers_uint8, uint8_t, 1, 1, 4)
__flatbuffers_build_union_field(3, flatbuffers_, dsim_type_data, dsim_any_type)
__flatbuffers_build_union_member_field(flatbuffers_, dsim_type_data, dsim_any_type, numeric_type, dsim_numeric_type)
__flatbuffers_build_union_member_field(flatbuffers_, dsim_type_data, dsim_any_type, struct_type, dsim_struct_type)

static inline dsim_type_ref_t dsim_type_create(flatbuffers_builder_t *B __dsim_type_formal_args)
{
    if (dsim_type_start(B)
        || dsim_type_name_add(B, v0)
        || dsim_type_data_add_member(B, v3)
        || dsim_type_size_add(B, v1)
        || dsim_type_data_add_type(B, v3.type)) {
        return 0;
    }
    return dsim_type_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsim_type, dsim_type_identifier, dsim_type_type_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, dsim_column_name)
__flatbuffers_build_string_field(1, flatbuffers_, dsim_column_type)

static inline dsim_column_ref_t dsim_column_create(flatbuffers_builder_t *B __dsim_column_formal_args)
{
    if (dsim_column_start(B)
        || dsim_column_name_add(B, v0)
        || dsim_column_type_add(B, v1)) {
        return 0;
    }
    return dsim_column_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsim_column, dsim_column_identifier, dsim_column_type_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, dsim_schema_name)
/* vector has keyed elements */
__flatbuffers_build_table_vector_field(1, flatbuffers_, dsim_schema_columns, dsim_column)

static inline dsim_schema_ref_t dsim_schema_create(flatbuffers_builder_t *B __dsim_schema_formal_args)
{
    if (dsim_schema_start(B)
        || dsim_schema_name_add(B, v0)
        || dsim_schema_columns_add(B, v1)) {
        return 0;
    }
    return dsim_schema_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsim_schema, dsim_schema_identifier, dsim_schema_type_identifier)

/* vector has keyed elements */
__flatbuffers_build_table_vector_field(0, flatbuffers_, dsim_config_types, dsim_type)
/* vector has keyed elements */
__flatbuffers_build_table_vector_field(1, flatbuffers_, dsim_config_schemas, dsim_schema)

static inline dsim_config_ref_t dsim_config_create(flatbuffers_builder_t *B __dsim_config_formal_args)
{
    if (dsim_config_start(B)
        || dsim_config_types_add(B, v0)
        || dsim_config_schemas_add(B, v1)) {
        return 0;
    }
    return dsim_config_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsim_config, dsim_config_identifier, dsim_config_type_identifier)

#include "flatcc/portable/pdiagnostic_pop.h"
#endif /* CONFIG_BUILDER_H */
