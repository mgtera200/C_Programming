/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */

 /*
 Write a program that reads a positive integer and
computes the factorial.
 */
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"
int factorial(unsigned char number);

int fac;
unsigned char number;
int sum=1;


int main(){

		printf("Enter num\n");
		fflush(stdout);
		fflush(stdin);
		scanf("%d",&number);
		fac = number * factorial(number-1);
		printf("Factorial is %d",fac);
	return 0;
}
int factorial(unsigned char number){

			if(number != 0)
			sum = number * factorial(number-1);
			return sum;
		}

