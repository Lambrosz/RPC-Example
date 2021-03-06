/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SIMPLE_RPC_H_RPCGEN
#define _SIMPLE_RPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXSTRLEN 100

typedef char *filestr;

#define REMFILEPROG 0x209090909
#define REMFILEVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define GETFILESTR 1
extern  filestr * getfilestr_1(void *, CLIENT *);
extern  filestr * getfilestr_1_svc(void *, struct svc_req *);
extern int remfileprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define GETFILESTR 1
extern  filestr * getfilestr_1();
extern  filestr * getfilestr_1_svc();
extern int remfileprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_filestr (XDR *, filestr*);

#else /* K&R C */
extern bool_t xdr_filestr ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SIMPLE_RPC_H_RPCGEN */
