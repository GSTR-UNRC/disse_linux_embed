#include <stdio.h> //printf()
#include <time.h> //time_t, time(), ctime()
#include <unistd.h> //sleep()


int main() {

	time_t hor_act;

	while(1) {
	  time(&hor_act);
	  printf("Horario Actual = %s", ctime(&hor_act));
	  sleep(1);
	}

  return 0;
}
