#ifndef _AUDIOPLATFORM_H_
#define _AUDIOPLATFORM_H_

#include <Arduino.h>
#include <AudioStream.h>
#include <arm_math.h>

#ifndef DELAY_QUEUE_SIZE
#define DELAY_QUEUE_SIZE  (176512 / AUDIO_BLOCK_SAMPLES)
#endif

#ifndef MAX_BUFFERS
#define MAX_BUFFERS 209
#endif

#endif
