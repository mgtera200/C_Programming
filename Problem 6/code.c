/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */

 /*
 Write a program that print the relation between two
integer number if those numbers are equal, not equal and
which one contain the higher value.
 */
#include "stdio.h"
#include "math.h"

int main(){
	int num1;
	int num2;
	printf("Enter two numbers\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{printf("Num1>Num2\n");
	}
	else if(num1==num2)
	{printf("Num1=Num2\n");
	}
	else if(num1<num2)
	{printf("Num1<Num2\n");}
}
