
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by tools/autogen.py from tools/public_api.h.
   Run this to regenerate:
       make autogen

*/

struct _HPyContext_s global_ctx = {
    .ctx_version = 1,
    .h_None = (HPy){CONSTANT_H_NONE},
    .h_True = (HPy){CONSTANT_H_TRUE},
    .h_False = (HPy){CONSTANT_H_FALSE},
    .h_ValueError = (HPy){CONSTANT_H_VALUEERROR},
    .h_TypeError = (HPy){CONSTANT_H_TYPEERROR},
    .ctx_Module_Create = &ctx_Module_Create,
    .ctx_Dup = &ctx_Dup,
    .ctx_Close = &ctx_Close,
    .ctx_Long_FromLong = &ctx_Long_FromLong,
    .ctx_Long_FromLongLong = &ctx_Long_FromLongLong,
    .ctx_Long_FromUnsignedLongLong = &ctx_Long_FromUnsignedLongLong,
    .ctx_Long_AsLong = &ctx_Long_AsLong,
    .ctx_Float_FromDouble = &ctx_Float_FromDouble,
    .ctx_Arg_Parse = &ctx_Arg_Parse,
    .ctx_Number_Add = &ctx_Number_Add,
    .ctx_Err_SetString = &ctx_Err_SetString,
    .ctx_Bytes_Check = &ctx_Bytes_Check,
    .ctx_Bytes_Size = &ctx_Bytes_Size,
    .ctx_Bytes_GET_SIZE = &ctx_Bytes_GET_SIZE,
    .ctx_Bytes_AsString = &ctx_Bytes_AsString,
    .ctx_Bytes_AS_STRING = &ctx_Bytes_AS_STRING,
    .ctx_Unicode_FromString = &ctx_Unicode_FromString,
    .ctx_Unicode_Check = &ctx_Unicode_Check,
    .ctx_Unicode_AsUTF8String = &ctx_Unicode_AsUTF8String,
    .ctx_Unicode_FromWideChar = &ctx_Unicode_FromWideChar,
    .ctx_List_New = &ctx_List_New,
    .ctx_List_Append = &ctx_List_Append,
    .ctx_Dict_New = &ctx_Dict_New,
    .ctx_Dict_SetItem = &ctx_Dict_SetItem,
    .ctx_FromPyObject = &ctx_FromPyObject,
    .ctx_AsPyObject = &ctx_AsPyObject,
    .ctx_CallRealFunctionFromTrampoline = &ctx_CallRealFunctionFromTrampoline,
};
