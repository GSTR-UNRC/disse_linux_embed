#include <stdio.h> //printf()
#include <string.h> //strcpy()
#include <unistd.h> //sleep()


int main() {
	char variable1[10];
	strcpy(variable1, "texto");

	while(1) {
		sleep(1);
		printf("%s\n",variable1);
	}

	return 0;
}
