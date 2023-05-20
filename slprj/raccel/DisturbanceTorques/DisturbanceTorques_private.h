#ifndef RTW_HEADER_DisturbanceTorques_private_h_
#define RTW_HEADER_DisturbanceTorques_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "DisturbanceTorques.h"
#include "DisturbanceTorques_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern void lxwunlml3l ( SimStruct * rtS_e ) ; extern void awwp2oqwza (
SimStruct * rtS_p ) ; extern void llswu3fq4m ( real_T ikxrl3vml5 , real_T
mny14th4zf , real_T * ivxoxfojvc , real_T * gr4ye1skvv , dcyrtw3wnk * localP
) ; extern void gtysyqskxw ( SimStruct * rtS_i ) ; extern void idxqlv2wef (
SimStruct * rtS_m ) ; extern void knhctetjg2 ( real_T igtxqxu5wt , real_T
o13o0lss0j , real_T * pzytmnclji , real_T * dwyqw2jzs5 ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
