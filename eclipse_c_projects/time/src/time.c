#include <stdio.h> //printf
#include <time.h> //time_t, time(), ctime()

int main ()
{
   time_t curtime;

   time(&curtime);

   printf("Current time = %s", ctime(&curtime));

   return(0);
}
