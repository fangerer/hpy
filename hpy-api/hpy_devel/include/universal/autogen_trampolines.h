
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by tools/autogen.py from tools/public_api.h.
   Run this to regenerate:
       make autogen

*/

static inline HPy HPyModule_Create(HPyContext ctx, HPyModuleDef *def) {
     return ctx->ctx_Module_Create ( ctx, def ); 
}

static inline HPy HPy_Dup(HPyContext ctx, HPy h) {
     return ctx->ctx_Dup ( ctx, h ); 
}

static inline void HPy_Close(HPyContext ctx, HPy h) {
     ctx->ctx_Close ( ctx, h ); 
}

static inline HPy HPyLong_FromLong(HPyContext ctx, long value) {
     return ctx->ctx_Long_FromLong ( ctx, value ); 
}

static inline long HPyLong_AsLong(HPyContext ctx, HPy h) {
     return ctx->ctx_Long_AsLong ( ctx, h ); 
}

static inline int HPyArg_Parse(HPyContext ctx, HPy *args, HPy_ssize_t nargs, const char *fmt, ...) {
     va_list _vl; va_start(_vl, fmt); int _res = ctx->ctx_Arg_Parse ( ctx, args, nargs, fmt, _vl ); va_end(_vl); return _res; 
}

static inline HPy HPyNumber_Add(HPyContext ctx, HPy x, HPy y) {
     return ctx->ctx_Number_Add ( ctx, x, y ); 
}

static inline void HPyErr_SetString(HPyContext ctx, HPy type, const char *message) {
     ctx->ctx_Err_SetString ( ctx, type, message ); 
}

static inline int HPyBytes_Check(HPyContext ctx, HPy o) {
     return ctx->ctx_Bytes_Check ( ctx, o ); 
}

static inline HPy_ssize_t HPyBytes_Size(HPyContext ctx, HPy o) {
     return ctx->ctx_Bytes_Size ( ctx, o ); 
}

static inline HPy_ssize_t HPyBytes_GET_SIZE(HPyContext ctx, HPy o) {
     return ctx->ctx_Bytes_GET_SIZE ( ctx, o ); 
}

static inline char *HPyBytes_AsString(HPyContext ctx, HPy o) {
     return ctx->ctx_Bytes_AsString ( ctx, o ); 
}

static inline char *HPyBytes_AS_STRING(HPyContext ctx, HPy o) {
     return ctx->ctx_Bytes_AS_STRING ( ctx, o ); 
}

static inline HPy HPyUnicode_FromString(HPyContext ctx, const char *utf8) {
     return ctx->ctx_Unicode_FromString ( ctx, utf8 ); 
}

static inline int HPyUnicode_Check(HPyContext ctx, HPy o) {
     return ctx->ctx_Unicode_Check ( ctx, o ); 
}

static inline HPy HPyUnicode_AsUTF8String(HPyContext ctx, HPy o) {
     return ctx->ctx_Unicode_AsUTF8String ( ctx, o ); 
}

static inline HPy HPyUnicode_FromWideChar(HPyContext ctx, const wchar_t *w, HPy_ssize_t size) {
     return ctx->ctx_Unicode_FromWideChar ( ctx, w, size ); 
}

static inline HPy HPyList_New(HPyContext ctx, HPy_ssize_t len) {
     return ctx->ctx_List_New ( ctx, len ); 
}

static inline int HPyList_Append(HPyContext ctx, HPy list, HPy item) {
     return ctx->ctx_List_Append ( ctx, list, item ); 
}

static inline HPy HPyDict_New(HPyContext ctx) {
     return ctx->ctx_Dict_New ( ctx ); 
}

static inline int HPyDict_SetItem(HPyContext ctx, HPy dict, HPy key, HPy val) {
     return ctx->ctx_Dict_SetItem ( ctx, dict, key, val ); 
}

static inline HPy HPy_FromPyObject(HPyContext ctx, struct _object *obj) {
     return ctx->ctx_FromPyObject ( ctx, obj ); 
}

static inline struct _object *HPy_AsPyObject(HPyContext ctx, HPy h) {
     return ctx->ctx_AsPyObject ( ctx, h ); 
}

static inline struct _object *_HPy_CallRealFunctionFromTrampoline(HPyContext ctx, struct _object *self, struct _object *args, void *func, int ml_flags) {
     return ctx->ctx_CallRealFunctionFromTrampoline ( ctx, self, args, func, ml_flags ); 
}

