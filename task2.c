#include <stdio.h>

int main(){
	int cel = 0;
	int fahr = 0;

	printf("Celsius: ");
	scanf("%d", &cel);
	
	fahr = (cel * 1.8) + 32;
	
	printf("Fahrenheit: %d \n", fahr);
	
	if (fahr >= 100){
		printf("Warning: Heat wave\n");
	} else if (fahr >= 80){
		printf("Hot\n");
	} else if (fahr >= 41){
		printf("Normal\n");
	} else {
		printf("Cold\n");
	}

	return 0;
}
