#include <stdio.h> //printf()
#include <string.h> //strcpy(), strcmp()

int main() {
	char var1[10];
	strcpy(var1, "texto");

	if(strcmp(var1, "texto") == 0) {
		printf("Dentro del if\n");
	}

	return 0;
}
