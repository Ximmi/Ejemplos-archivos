#include <stdio.h>

int main(int argc, char *argv[]){
   FILE *ent=fopen(*++argv, "r");
   char pal[30], pal2[30];
   int longi;
   while(fscanf(ent, "%s", pal)!=EOF){
     printf("%s\n", pal);
     longi=longi+1;
   }
   printf("Caracteres tecleados:%d\n", longi);
   fclose(ent);

return 0;
}
