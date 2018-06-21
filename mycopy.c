#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("%d\n", argc);
	
	while(argc--)
	  printf("%d\n", *argv++);
	printf("%d\n", argc);
	return 0;
}
