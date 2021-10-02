#include <stdio.h>

//	defin structure

struct employee{
	int empNo;
	char gender;
	double salary;
} emp1, emp2;

int main(){
    emp1.empNo = 1;
    emp1.gender = 'M';
    emp1.salary = 89000;
    
    emp2.empNo = 2;
    emp2.gender = 'F';
    emp2.salary = 45000;
	
	printf("Employee1 employee number: %d\n", emp1.empNo);
	printf("Employee1 gender: %c\n", emp1.gender);
	printf("Employee1 salary: %lf\n", emp1.salary);
	
	return 0;
}