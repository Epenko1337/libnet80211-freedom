#ifndef __IEE80211_H__
#define __IEE80211_H__
#endif

#include "c_types.h"

#if defined(NONOSDK305)
#define NONOSDK (0x30500)
#else
#define NONOSDK (0x22100)
#endif

#define FREEDOM_OUTPUT_INVALID_INTERFACE -4
#define FREEDOM_OUTPUT_INVALID_ARGS -3
#define FREEDOM_OUTPUT_NOT_ALLOWED -2
#define FREEDOM_OUTPUT_ALLOC_FAILED -1
#define FREEDOM_OUTPUT_SUCCESS 0 

#ifdef __cplusplus
extern "C" {
#endif

int ieee80211_freedom_output(uint8 interface, uint8* buf, uint32 len, bool seq_ctl);


#ifdef __cplusplus
}
#endif