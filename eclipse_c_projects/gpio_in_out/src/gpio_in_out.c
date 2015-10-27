#include <stdio.h>
#include <mraa.h>
#include <unistd.h>

int main() {

	mraa_init();

	int valor_pulsador;
	mraa_gpio_context gpio_pulsador, gpio_led;

	gpio_pulsador = mraa_gpio_init(6);
	//gpio_pulsador = mraa_gpio_init_raw(24);
	gpio_led = mraa_gpio_init_raw(3);

	mraa_gpio_dir(gpio_pulsador, MRAA_GPIO_IN);
	mraa_gpio_dir(gpio_led, MRAA_GPIO_OUT);

	for (;;) {
		valor_pulsador = mraa_gpio_read(gpio_pulsador);
		mraa_gpio_write(gpio_led, valor_pulsador);
		fprintf(stdout, "Valor en pin D6: %d\n", valor_pulsador);
		sleep(1);
	}

	mraa_gpio_close(gpio_pulsador);
	mraa_gpio_close(gpio_led);

	return 0;
}
