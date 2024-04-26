/*
Write a C Function that return the addition or subtraction or
multiplication or division for two numbers. The function should take the
required operation and two numbers as arguments. It also should check
that the input operation is one of those operation that mentioned before
and if not it should return error. The function should be implemented
using switch case.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>

int calculation(char operation,int operand1, int operand2);
int main(){
	char operation;
	int result;
	int operand1,operand2;
	printf("What operation you want to do\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&operation);
	printf("Enter the operands\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d",&operand1,&operand2);
	result = calculation(operation,operand1,operand2);
	printf("The result is %d",result);

	return 0;

}
int calculation(char operation,int operand1, int operand2){
	int sum;
	switch(operation){
	case '*':
		sum = operand1 * operand2;
		break;
	case '-':
		sum = operand1 - operand2;
		break;

	case '/':
		sum = operand1 / operand2;
		break;

	case '+':
		sum = operand1 + operand2;
		break;
	default:
		printf("ERROR\n");
		exit(1);

	}
return sum;
}
