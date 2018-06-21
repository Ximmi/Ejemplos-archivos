#include <stdio.h>

int main(int argc, char *argv[]){
   FILE *sal=fopen(*++argv, "w");
   char pal[30];
   int i;
   for(i=1; i<=5;i++){
   printf("Cadena %d: ",i);
   scanf("%s", pal);
   fprintf(sal, "%s\n", pal);
   }
   
   fclose(sal);

return 0;
}
