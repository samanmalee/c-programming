// include headerfiles
#include <stdio.h>

// define main function
int main(){
	// variable declaration
	char operator;
	float number1, number2;
	float answer;
	
	// get number1 from user
	printf("Enter the number1: ");
	scanf("%f", &number1);
	// get operator from user
	printf("Enter the operator: ");
	scanf(" %c", &operator);
	// get number2 from user
	printf("Enter the number2: ");
	scanf("%f", &number2);
	
	// check is there any case for the user input
	switch(operator){
		// addition
		case '+':
			printf("\n%.2f + %.2f = %.2f", number1, number2, number1 + number2);
			break;
		// subtraction
		case '-':
			printf("\n%.2f - %.2f = %.2f", number1, number2, number1 - number2);
			break;
		// multiplication
		case '*':
			printf("\n%.2f * %.2f = %.2f", number1, number2, number1 * number2);
			break;
		// division
		case '/':
			// check is number2 equal 0 or not
			if(number2 == 0){
				// error message
				printf("\n%.2f can't devided by 0", number1);
			}else{
				// division
				printf("\n%.2f / %.2f = %.2f", number1, number2, number1 / number2);
			}
			break;
		// print error if user enter wrong operator
		default:
			printf("\nInvalid Operator!");
	}
	
	// indicate successful termination
	return 0;

// end of the main function
}
