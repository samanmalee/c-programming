// include header files
#include <stdio.h>
#include <ctype.h>

// define main function
int main(){
	// variable declaration
	char transactionType;
	float balance, amount;
	
	// get transaction type from user
	printf("Enter transaction type(Withdrawal- w/ Deposit- d): ");
	transactionType = getchar();
	
	// check is transaction type W or w
	if(tolower(transactionType) == 'w'){
		// display welcome message 
		printf("You have selected to withdraw money!\n\n");
		
		// get balance and withdraw amount from user
		printf("Enter the bank balance: ");
		scanf("%f", &balance);
		printf("Enter the amount to withdraw: ");
		scanf("%f", &amount);
		
		// check is balance sufficient for the withdrawal
		if(amount > balance){
			// print transaction incomplete message
			printf("Sorry, You can't withdraw %.2f amount.", amount);
		}else{
			// update new balance
			balance -= amount;
			// print new balance
			printf("Account new balance is %.2f", balance);
		}
	// check is transaction type D or d
	}else if(tolower(transactionType) == 'd'){
		// display welcome message
		printf("You have selected to deposit money!\n\n");
		
		// get the balance and withdrawal amount
		printf("Enter the bank balance: ");
		scanf("%f", &balance);
		printf("Enter the amount to deposit: ");
		scanf("%f", &amount);
		
		// update new balance
		balance += amount;
		// display new balance
		printf("Account new balance is %.2f", balance);
	
	}else{
		// error message, if user enter wrong transaction type
		printf("\nYou have selected an invalid transaction type!\n");
	}
	
	// successful termination indicate
	return 0;
	
// end of the main function
}
