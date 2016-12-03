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

#define __dsimx_type_formal_args , dsimx_type_enum_t v0
#define __dsimx_type_call_args , v0
__flatbuffers_build_scalar(flatbuffers_, dsimx_type, dsimx_type_enum_t)

static const flatbuffers_voffset_t __dsimx_column_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsimx_column, 3)
static const flatbuffers_voffset_t __dsimx_schema_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsimx_schema, 2)
static const flatbuffers_voffset_t __dsimx_config_required[] = {0 };
__flatbuffers_build_table(flatbuffers_, dsimx_config, 1)
#define __dsimx_column_formal_args , flatbuffers_string_ref_t v0, uint8_t v1, dsimx_type_enum_t v2
#define __dsimx_column_call_args , v0, v1, v2
static inline dsimx_column_ref_t dsimx_column_create(flatbuffers_builder_t *B __dsimx_column_formal_args);
#define __dsimx_schema_formal_args , flatbuffers_string_ref_t v0, dsimx_column_vec_ref_t v1
#define __dsimx_schema_call_args , v0, v1
static inline dsimx_schema_ref_t dsimx_schema_create(flatbuffers_builder_t *B __dsimx_schema_formal_args);
#define __dsimx_config_formal_args , dsimx_schema_vec_ref_t v0
#define __dsimx_config_call_args , v0
static inline dsimx_config_ref_t dsimx_config_create(flatbuffers_builder_t *B __dsimx_config_formal_args);

__flatbuffers_build_string_field(0, flatbuffers_, dsimx_column_name)
__flatbuffers_build_scalar_field(1, flatbuffers_, dsimx_column_size, flatbuffers_uint8, uint8_t, 1, 1, 0)
__flatbuffers_build_scalar_field(2, flatbuffers_, dsimx_column_type, dsimx_type, dsimx_type_enum_t, 1, 1, 0)

static inline dsimx_column_ref_t dsimx_column_create(flatbuffers_builder_t *B __dsimx_column_formal_args)
{
    if (dsimx_column_start(B)
        || dsimx_column_name_add(B, v0)
        || dsimx_column_size_add(B, v1)
        || dsimx_column_type_add(B, v2)) {
        return 0;
    }
    return dsimx_column_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsimx_column, dsimx_column_identifier, dsimx_column_type_identifier)

__flatbuffers_build_string_field(0, flatbuffers_, dsimx_schema_name)
/* vector has keyed elements */
__flatbuffers_build_table_vector_field(1, flatbuffers_, dsimx_schema_columns, dsimx_column)

static inline dsimx_schema_ref_t dsimx_schema_create(flatbuffers_builder_t *B __dsimx_schema_formal_args)
{
    if (dsimx_schema_start(B)
        || dsimx_schema_name_add(B, v0)
        || dsimx_schema_columns_add(B, v1)) {
        return 0;
    }
    return dsimx_schema_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsimx_schema, dsimx_schema_identifier, dsimx_schema_type_identifier)

/* vector has keyed elements */
__flatbuffers_build_table_vector_field(0, flatbuffers_, dsimx_config_schemas, dsimx_schema)

static inline dsimx_config_ref_t dsimx_config_create(flatbuffers_builder_t *B __dsimx_config_formal_args)
{
    if (dsimx_config_start(B)
        || dsimx_config_schemas_add(B, v0)) {
        return 0;
    }
    return dsimx_config_end(B);
}
__flatbuffers_build_table_prolog(flatbuffers_, dsimx_config, dsimx_config_identifier, dsimx_config_type_identifier)

#include "flatcc/portable/pdiagnostic_pop.h"
#endif /* CONFIG_BUILDER_H */
