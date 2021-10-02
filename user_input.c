#include <stdio.h>

int main(){
    // variable declaration

    int number; // integer variable
    char letter; // char variable
    double number1; // double variable
    char name[100]; // string variable

    // get number from user
    printf("Enter integer number: ");
    scanf("%d", &number);

    // get character from user
    printf("Enter character: ");
    scanf(" %c", &letter);

    // get double number from user
    printf("Enter double number: ");
    scanf("%lf", &number1);

    // get string from user
    printf("Enter name: ");
    scanf(" %[^\n]s", name);
    
    printf("\n----------------output----------------\n\n");
    printf("Integer: %d\n", number); // print integer
	printf("Char: %c\n", letter); // print letter
	printf("Double: %lf\n", number1); // print double
    printf("String: %s\n", name); // print string
	
	return 0;
}