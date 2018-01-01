/*
 * Excerpts from timer.h from tmk_core
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#define TIMER_DIFF(a, b, max)   ((a) >= (b) ?  (a) - (b) : (max) - (b) + (a))
#define TIMER_DIFF_8(a, b)      TIMER_DIFF(a, b, UINT8_MAX)
#define TIMER_DIFF_16(a, b)     TIMER_DIFF(a, b, UINT16_MAX)
#define TIMER_DIFF_32(a, b)     TIMER_DIFF(a, b, UINT32_MAX)
#define TIMER_DIFF_RAW(a, b)    TIMER_DIFF_8(a, b)

extern volatile uint32_t timer_count;

void timer_init(void);
void timer_clear(void);
uint16_t timer_read(void);
uint32_t timer_read32(void);
uint16_t timer_elapsed(uint16_t last);
uint32_t timer_elapsed32(uint32_t last);

#endif /* TIMER_H_ */