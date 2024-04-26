/*
Write a program to calculate the power of a number.
The number and its power are input from user.
*/

#include <stdio.h>
#include <math.h>
int main(){
	int base, exponent;
	int value = 1;
	printf("Enter a base value:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &base);
	printf("Enter an exponent value: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &exponent);
	while (exponent != 0){
		value *= base;
		--exponent;
	}
	printf("result = %d", value);
	return 0;
}
