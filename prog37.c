#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char c;
	FILE *ent=fopen(*++argv, "r");
	FILE *sal=fopen(*++argv, "w");
	
	while((c=fgetc(ent))!=EOF)
	   fputc(c, sal);
	   
	fclose(ent);
	fclose(sal);
	
	printf("%d\n", argc);

	return 0;
}
