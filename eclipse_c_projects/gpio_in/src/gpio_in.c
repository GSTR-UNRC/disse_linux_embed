#include <stdio.h>
#include <mraa.h>
#include <unistd.h>

int main() {

	mraa_init();

	mraa_gpio_context gpio;

	gpio = mraa_gpio_init(6);
	//gpio = mraa_gpio_init_raw(24);

	mraa_gpio_dir(gpio, MRAA_GPIO_IN);

	for (;;) {
		fprintf(stdout, "Valor en pin D6: %d\n", mraa_gpio_read(gpio));
		sleep(1);
	}

	mraa_gpio_close(gpio);

	return 0;
}
