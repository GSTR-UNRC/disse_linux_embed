#include <stdio.h> //printf()
#include <unistd.h> //access()

int main() {

	if( access("./archivo.txt", F_OK ) != -1 ) {
	    printf("El archivo existe.\n");
	} else {
		printf("El archivo no existe.\n");
	}

	return 0;
}
