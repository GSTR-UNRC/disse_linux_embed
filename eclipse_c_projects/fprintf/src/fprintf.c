#include <stdio.h> //printf(), fopen(), fprintf(), fclose(), fgetc(), feof()

int main()
{
   printf("Se muestra en pantalla esta línea.\n");

   FILE * fp;
   fp = fopen("archivo.txt", "w+");
   fprintf(fp, "Contenido a colocar en el archivo.\n");
   fclose(fp);

   printf("Se escribio el archivo...\n");

   int c;
   fp = fopen("archivo.txt","r");
   while(1)
   {
      c = fgetc(fp);
      if( feof(fp) )
      {
         break;
      }
      printf("%c", c);
   }
   fclose(fp);

   return(0);
}
