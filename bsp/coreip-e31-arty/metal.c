/*

 ============================================================
 *           ####### INLINE_HDR1_C ####### 
 * This is a generated codes, please do not edit the file
 *
 ============================================================
 */

#include <metal/machine.h>


/* --------------------- sifive_gpio_button ------------ */
extern inline struct __metal_driver_sifive_gpio0 * __metal_driver_sifive_gpio_button_gpio(struct metal_button *button);
extern inline int __metal_driver_sifive_gpio_button_pin(struct metal_button *button);
extern inline struct metal_interrupt * __metal_driver_sifive_gpio_button_interrupt_controller(struct metal_button *button);
extern inline int __metal_driver_sifive_gpio_button_interrupt_line(struct metal_button *button);
extern inline char * __metal_driver_sifive_gpio_button_label(struct metal_button *button);


/* --------------------- sifive_gpio_led ------------ */
extern inline struct __metal_driver_sifive_gpio0 * __metal_driver_sifive_gpio_led_gpio(struct metal_led *led);
extern inline int __metal_driver_sifive_gpio_led_pin(struct metal_led *led);
extern inline char * __metal_driver_sifive_gpio_led_label(struct metal_led *led);


/* --------------------- sifive_gpio_switch ------------ */
extern inline struct __metal_driver_sifive_gpio0 * __metal_driver_sifive_gpio_switch_gpio(struct metal_switch *flip);
extern inline int __metal_driver_sifive_gpio_switch_pin(struct metal_switch *flip);
extern inline struct metal_interrupt * __metal_driver_sifive_gpio_switch_interrupt_controller(struct metal_switch *flip);
extern inline int __metal_driver_sifive_gpio_switch_interrupt_line(struct metal_switch *flip);
extern inline char * __metal_driver_sifive_gpio_switch_label(struct metal_switch *flip);


