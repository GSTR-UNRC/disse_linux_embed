#include <stdio.h> //printf
#include <time.h> //time(), ctime()
#include <unistd.h> //sleep()

int main() {

	int i;
	time_t curtime;
	for (i = 1; i <= 10; ++i) {
		time(&curtime);
	    printf("Iteración: %d. Horario: %s\n",i,ctime(&curtime));
	    sleep(1);
	}

  return 0;
}
