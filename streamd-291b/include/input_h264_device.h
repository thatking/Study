#ifndef input_h264_device_H
#define input_h264_device_H

#ifdef __cplusplus
extern "C" {
#endif

#include "event2/event.h"

int input_h264_device_init(struct event_base *base);
int input_h264_device_close();

#ifdef __cplusplus
}
#endif


#endif
