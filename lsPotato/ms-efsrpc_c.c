#include "rpc.h"
#include "ms-efsrpc_h.h"

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Aug 12 20:42:29 2021
 */
 /* Compiler settings for rpc.idl:
     Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555
     protocol : dce , ms_ext, c_ext, robust
     error checks: allocation ref bounds_check enum stub_data
     VC __declspec() decoration level:
          __declspec(uuid()), __declspec(selectany), __declspec(novtable)
          DECLSPEC_UUID(), MIDL_INTERFACE()
 */
 /* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>



#define TYPE_FORMAT_STRING_SIZE   15                                
#define PROC_FORMAT_STRING_SIZE   53                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _rpc_MIDL_TYPE_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[TYPE_FORMAT_STRING_SIZE];
} rpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _rpc_MIDL_PROC_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[PROC_FORMAT_STRING_SIZE];
} rpc_MIDL_PROC_FORMAT_STRING;

typedef struct _rpc_MIDL_EXPR_FORMAT_STRING
{
    long          Pad;
    unsigned char  Format[EXPR_FORMAT_STRING_SIZE];
} rpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax =
{ {0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0} };


extern const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString;
extern const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString;
extern const rpc_MIDL_EXPR_FORMAT_STRING rpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: efsrpc, ver. 1.0,
   GUID={0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}} */



static const RPC_CLIENT_INTERFACE efsrpc___RpcClientInterface =
{
sizeof(RPC_CLIENT_INTERFACE),
{{0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}},{1,0}},
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
0,
0,
0,
0,
0,
0x00000000
};
RPC_IF_HANDLE efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)&efsrpc___RpcClientInterface;

extern const MIDL_STUB_DESC efsrpc_StubDesc;

static RPC_BINDING_HANDLE efsrpc__MIDL_AutoBindHandle;


long EfsRpcOpenFileRaw(
    /* [in] */ handle_t binding_h,
    /* [out] */ PEXIMPORT_CONTEXT_HANDLE* hContext,
    /* [string][in] */ wchar_t* FileName,
    /* [in] */ long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&efsrpc_StubDesc,
        (PFORMAT_STRING)&rpc__MIDL_ProcFormatString.Format[0],
        (unsigned char*)&binding_h);
    return (long)_RetVal.Simple;

}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString =
{
    0,
    {

        /* Procedure EfsRpcOpenFileRaw */

                0x0,		/* 0 */
                0x48,		/* Old Flags:  */
                /*  2 */	NdrFcLong(0x0),	/* 0 */
                /*  6 */	NdrFcShort(0x0),	/* 0 */
                /*  8 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
                /* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
                            0x0,		/* 0 */
                            /* 12 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
                            /* 14 */	NdrFcShort(0x8),	/* 8 */
                            /* 16 */	NdrFcShort(0x40),	/* 64 */
                            /* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
                                        0x4,		/* 4 */
                                        /* 20 */	0x8,		/* 8 */
                                                    0x1,		/* Ext Flags:  new corr desc, */
                                                    /* 22 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 24 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 26 */	NdrFcShort(0x0),	/* 0 */

                                                        /* Parameter binding_h */

                                                        /* 28 */	NdrFcShort(0x110),	/* Flags:  out, simple ref, */
                                                        /* 30 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
                                                        /* 32 */	NdrFcShort(0x6),	/* Type Offset=6 */

                                                            /* Parameter hContext */

                                                            /* 34 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
                                                            /* 36 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
                                                            /* 38 */	NdrFcShort(0xc),	/* Type Offset=12 */

                                                                /* Parameter FileName */

                                                                /* 40 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
                                                                /* 42 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
                                                                /* 44 */	0x8,		/* FC_LONG */
                                                                            0x0,		/* 0 */

                                                                    /* Parameter Flags */

                                                                    /* 46 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
                                                                    /* 48 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
                                                                    /* 50 */	0x8,		/* FC_LONG */
                                                                                0x0,		/* 0 */

                                                                                0x0
                                                                            }
};

static const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString =
{
    0,
    {
        NdrFcShort(0x0),	/* 0 */
/*  2 */
            0x11, 0x4,	/* FC_RP [alloced_on_stack] */
            /*  4 */	NdrFcShort(0x2),	/* Offset= 2 (6) */
            /*  6 */	0x30,		/* FC_BIND_CONTEXT */
                        0xa0,		/* Ctxt flags:  via ptr, out, */
                        /*  8 */	0x0,		/* 0 */
                                    0x0,		/* 0 */
                        /* 10 */
                                    0x11, 0x8,	/* FC_RP [simple_pointer] */
                        /* 12 */
                                    0x25,		/* FC_C_WSTRING */
                                    0x5c,		/* FC_PAD */

                                    0x0
                                }
};

static const unsigned short efsrpc_FormatStringOffsetTable[] =
{
0
};


static const MIDL_STUB_DESC efsrpc_StubDesc =
{
(void*)&efsrpc___RpcClientInterface,
MIDL_user_allocate,
MIDL_user_free,
&efsrpc__MIDL_AutoBindHandle,
0,
0,
0,
0,
rpc__MIDL_TypeFormatString.Format,
1, /* -error bounds_check flag */
0x50002, /* Ndr library version */
0,
0x700022b, /* MIDL Version 7.0.555 */
0,
0,
0,  /* notify & notify_flag routine table */
0x1, /* MIDL flag */
0, /* cs routines */
0,   /* proxy/server info */
0
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
 /* Compiler settings for rpc.idl:
     Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622
     protocol : dce , ms_ext, c_ext, robust
     error checks: allocation ref bounds_check enum stub_data
     VC __declspec() decoration level:
          __declspec(uuid()), __declspec(selectany), __declspec(novtable)
          DECLSPEC_UUID(), MIDL_INTERFACE()
 */
 /* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "rpc.h"

#define TYPE_FORMAT_STRING_SIZE   15                                
#define PROC_FORMAT_STRING_SIZE   55                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _rpc_MIDL_TYPE_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[TYPE_FORMAT_STRING_SIZE];
} rpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _rpc_MIDL_PROC_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[PROC_FORMAT_STRING_SIZE];
} rpc_MIDL_PROC_FORMAT_STRING;

typedef struct _rpc_MIDL_EXPR_FORMAT_STRING
{
    long          Pad;
    unsigned char  Format[EXPR_FORMAT_STRING_SIZE];
} rpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax =
{ {0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0} };


extern const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString;
extern const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString;
extern const rpc_MIDL_EXPR_FORMAT_STRING rpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: efsrpc, ver. 1.0,
   GUID={0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}} */



static const RPC_CLIENT_INTERFACE efsrpc___RpcClientInterface =
{
sizeof(RPC_CLIENT_INTERFACE),
{{0xc681d488,0xd850,0x11d0,{0x8c,0x52,0x00,0xc0,0x4f,0xd9,0x0f,0x7e}},{1,0}},
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
0,
0,
0,
0,
0,
0x00000000
};
RPC_IF_HANDLE efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)&efsrpc___RpcClientInterface;

extern const MIDL_STUB_DESC efsrpc_StubDesc;

static RPC_BINDING_HANDLE efsrpc__MIDL_AutoBindHandle;


long EfsRpcOpenFileRaw(
    /* [in] */ handle_t binding_h,
    /* [out] */ PEXIMPORT_CONTEXT_HANDLE* hContext,
    /* [string][in] */ wchar_t* FileName,
    /* [in] */ long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&efsrpc_StubDesc,
        (PFORMAT_STRING)&rpc__MIDL_ProcFormatString.Format[0],
        binding_h,
        hContext,
        FileName,
        Flags);
    return (long)_RetVal.Simple;

}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString =
{
    0,
    {

        /* Procedure EfsRpcOpenFileRaw */

                0x0,		/* 0 */
                0x48,		/* Old Flags:  */
                /*  2 */	NdrFcLong(0x0),	/* 0 */
                /*  6 */	NdrFcShort(0x0),	/* 0 */
                /*  8 */	NdrFcShort(0x28),	/* X64 Stack size/offset = 40 */
                /* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
                            0x0,		/* 0 */
                            /* 12 */	NdrFcShort(0x0),	/* X64 Stack size/offset = 0 */
                            /* 14 */	NdrFcShort(0x8),	/* 8 */
                            /* 16 */	NdrFcShort(0x40),	/* 64 */
                            /* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
                                        0x4,		/* 4 */
                                        /* 20 */	0xa,		/* 10 */
                                                    0x1,		/* Ext Flags:  new corr desc, */
                                                    /* 22 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 24 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 26 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 28 */	NdrFcShort(0x0),	/* 0 */

                                                        /* Parameter hContext */

                                                        /* 30 */	NdrFcShort(0x110),	/* Flags:  out, simple ref, */
                                                        /* 32 */	NdrFcShort(0x8),	/* X64 Stack size/offset = 8 */
                                                        /* 34 */	NdrFcShort(0x6),	/* Type Offset=6 */

                                                            /* Parameter FileName */

                                                            /* 36 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
                                                            /* 38 */	NdrFcShort(0x10),	/* X64 Stack size/offset = 16 */
                                                            /* 40 */	NdrFcShort(0xc),	/* Type Offset=12 */

                                                                /* Parameter Flags */

                                                                /* 42 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
                                                                /* 44 */	NdrFcShort(0x18),	/* X64 Stack size/offset = 24 */
                                                                /* 46 */	0x8,		/* FC_LONG */
                                                                            0x0,		/* 0 */

                                                                    /* Return value */

                                                                    /* 48 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
                                                                    /* 50 */	NdrFcShort(0x20),	/* X64 Stack size/offset = 32 */
                                                                    /* 52 */	0x8,		/* FC_LONG */
                                                                                0x0,		/* 0 */

                                                                                0x0
                                                                            }
};

static const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString =
{
    0,
    {
        NdrFcShort(0x0),	/* 0 */
/*  2 */
            0x11, 0x4,	/* FC_RP [alloced_on_stack] */
            /*  4 */	NdrFcShort(0x2),	/* Offset= 2 (6) */
            /*  6 */	0x30,		/* FC_BIND_CONTEXT */
                        0xa0,		/* Ctxt flags:  via ptr, out, */
                        /*  8 */	0x0,		/* 0 */
                                    0x0,		/* 0 */
                        /* 10 */
                                    0x11, 0x8,	/* FC_RP [simple_pointer] */
                        /* 12 */
                                    0x25,		/* FC_C_WSTRING */
                                    0x5c,		/* FC_PAD */

                                    0x0
                                }
};

static const unsigned short efsrpc_FormatStringOffsetTable[] =
{
0
};


static const MIDL_STUB_DESC efsrpc_StubDesc =
{
(void*)&efsrpc___RpcClientInterface,
MIDL_user_allocate,
MIDL_user_free,
&efsrpc__MIDL_AutoBindHandle,
0,
0,
0,
0,
rpc__MIDL_TypeFormatString.Format,
1, /* -error bounds_check flag */
0x50002, /* Ndr library version */
0,
0x801026e, /* MIDL Version 8.1.622 */
0,
0,
0,  /* notify & notify_flag routine table */
0x1, /* MIDL flag */
0, /* cs routines */
0,   /* proxy/server info */
0
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

