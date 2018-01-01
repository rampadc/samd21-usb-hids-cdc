#include <asf.h>
#include <stdio.h>
#include <inttypes.h>

#include "timer.h"

void hook_timer_1ms(void); 

int main (void)
{
	system_init();
	irq_initialize_vectors();
	cpu_irq_enable();
	sleepmgr_init();

	delay_init();
	timer_init();

	stdio_usb_init();

	/* Sleep in main, USB callbacks are handled in usb_callbacks.c */
	uint8_t ch;
	while (1) {
		// Example: showing STDIO over CDC is working
		// Note: When a COM port is opened, timer appears to be skipped over (blinking slows down)
		scanf("%c", &ch);
		if (ch) {
			printf("%" PRId32 "\r\n", timer_read32());
		}

		// Uncomment below line to enable sleep
		//sleepmgr_enter_sleep();
	}
}

void hook_timer_1ms() {
	// toggle every ~100ms
	if (timer_read32() % 100 == 0) {
		port_pin_toggle_output_level(LED_0_PIN);
	}
}
