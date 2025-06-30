#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]){
	if (argc != 3){
		printf("error incorrect number of arguments supplied\n");	
		return 1;
	}

	char *endptr;
	long num = strtol(argv[1], &endptr, 10);	
	
	if (num < 0 || *endptr != '\0'){
		printf("error negative number or conversion not successful\n");
		return 1;
	}

	for(int i = 0; i < num; i++)
		printf("%s\n", argv[2]);	
	
	return 0;
}
