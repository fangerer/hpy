
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by tools/autogen.py from tools/public_api.h.
   Run this to regenerate:
       make autogen

*/

static inline HPy HPyModule_Create(HPyContext ctx, HPyModuleDef *def) {
     return ctx->ctx_Module_Create ( ctx, def ); 
}

static inline HPy HPyNone_Get(HPyContext ctx) {
     return ctx->ctx_None_Get ( ctx ); 
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

static inline int HPyArg_ParseTuple(HPyContext ctx, HPy args, const char *fmt, ...) {
     va_list _vl; va_start(_vl, fmt); int _res = ctx->ctx_Arg_ParseTuple ( ctx, args, fmt, _vl ); va_end(_vl); return _res; 
}

static inline HPy HPyNumber_Add(HPyContext ctx, HPy x, HPy y) {
     return ctx->ctx_Number_Add ( ctx, x, y ); 
}

static inline HPy HPyUnicode_FromString(HPyContext ctx, const char *utf8) {
     return ctx->ctx_Unicode_FromString ( ctx, utf8 ); 
}

static inline HPy HPy_FromPyObject(HPyContext ctx, struct _object *obj) {
     return ctx->ctx_FromPyObject ( ctx, obj ); 
}

static inline struct _object *HPy_AsPyObject(HPyContext ctx, HPy h) {
     return ctx->ctx_AsPyObject ( ctx, h ); 
}

static inline struct _object *_HPy_CallRealFunctionFromTrampoline(HPyContext ctx, struct _object *self, struct _object *args, HPyCFunction func) {
     return ctx->ctx_CallRealFunctionFromTrampoline ( ctx, self, args, func ); 
}
