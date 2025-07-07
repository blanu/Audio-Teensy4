#ifndef AUDIOPLATFORM_H_
#define AUDIOPLATFORM_H_

#include <Arduino.h>
#include <AudioStream.h>
#include <arm_math.h>

#ifndef DELAY_QUEUE_SIZE
#define DELAY_QUEUE_SIZE  (176512 / AUDIO_BLOCK_SAMPLES)
#endif

#ifndef MAX_BUFFERS_COUNT
#define MAX_BUFFERS_COUNT 209
#endif

#endif
