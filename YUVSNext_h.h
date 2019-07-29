

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Jun 14 15:24:53 2015
 */
/* Compiler settings for YUVSNext.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __YUVSNext_h_h__
#define __YUVSNext_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IYUVSNext_FWD_DEFINED__
#define __IYUVSNext_FWD_DEFINED__
typedef interface IYUVSNext IYUVSNext;
#endif 	/* __IYUVSNext_FWD_DEFINED__ */


#ifndef __CYUVSNextDoc_FWD_DEFINED__
#define __CYUVSNextDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CYUVSNextDoc CYUVSNextDoc;
#else
typedef struct CYUVSNextDoc CYUVSNextDoc;
#endif /* __cplusplus */

#endif 	/* __CYUVSNextDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __YUVSNext_LIBRARY_DEFINED__
#define __YUVSNext_LIBRARY_DEFINED__

/* library YUVSNext */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_YUVSNext;

#ifndef __IYUVSNext_DISPINTERFACE_DEFINED__
#define __IYUVSNext_DISPINTERFACE_DEFINED__

/* dispinterface IYUVSNext */
/* [uuid] */ 


EXTERN_C const IID DIID_IYUVSNext;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0D67175B-3EEC-4FED-A3E4-6F9011AF1F82")
    IYUVSNext : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IYUVSNextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IYUVSNext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IYUVSNext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IYUVSNext * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IYUVSNext * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IYUVSNext * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IYUVSNext * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IYUVSNext * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IYUVSNextVtbl;

    interface IYUVSNext
    {
        CONST_VTBL struct IYUVSNextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IYUVSNext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IYUVSNext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IYUVSNext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IYUVSNext_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IYUVSNext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IYUVSNext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IYUVSNext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IYUVSNext_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CYUVSNextDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("17D6C2A7-89A3-4CF4-BEAC-FD9AFC228D23")
CYUVSNextDoc;
#endif
#endif /* __YUVSNext_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


