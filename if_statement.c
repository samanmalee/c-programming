#include <stdio.h>

int main(){
	// variable declaration
	int number1, number2;
	int max;
	
	// get number1, number2 from user
	printf("Enter number1: ");
	scanf("%d", &number1);
	printf("Enter number2: ");
	scanf("%d", &number2);

	// check the largest number	
	if(number1 > number2)
		max = number1;
	else
		max = number2;
		
	printf("Largest number is %d", max);
	
	return 0;
}