/*
 * usb_callbacks.c
 *
 * Created: 1/01/2018 5:02:57 PM
 *  Author: cong
 */ 
#include <asf.h>
#include "conf_usb.h"
#include <stdio.h>

/************************************************************************/
/*  USB Device callbacks                                                */
/************************************************************************/
void usb_callback_vbus_action(bool b_vbus_high) {
}

void usb_callback_sof_action(void) {

}

void usb_callback_suspend_action(void) {

}

void usb_callback_resume_action(void) {

}

void usb_callback_remotewakeup_enable(void) {

}

void usb_callback_remotewakeup_disable(void) {

}
bool usb_callback_extra_string(void) {
	return true;
}

/************************************************************************/
/*  CDC callbacks                                                       */
/************************************************************************/
bool cdc_callback_enable(void) {
	stdio_usb_enable();
	return true;
}
void cdc_callback_disable(void) {
	stdio_usb_disable();
}
void cdc_callback_rx_notify(uint8_t port) {
	
}
void cdc_callback_tx_empty_notify(uint8_t port) {

}
void cdc_callback_set_dtr(uint8_t port, bool b_enable) {

}
void cdc_callback_set_rts(uint8_t port, bool b_enable) {

}

/************************************************************************/
/*  HID Keyboard callbacks                                              */
/************************************************************************/
bool hid_kbd_callback_enable(void) {
	return true;
}
void hid_kbd_callback_disable(void) {

}
void hid_kbd_callback_led(uint8_t value) {

}

/************************************************************************/
/*  HID Mouse callbacks                                                 */
/************************************************************************/
bool hid_mouse_callback_enable(void) {
	return true;
}
void hid_mouse_callback_disable(void) {

}