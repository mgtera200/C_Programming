/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */

 /*
 Write a program to make a simple calculator using
switch-case. The calculator takes the operation
(+ or – or * or /) and takes the two input arguments and
print the results.
 */
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"

int main()
{
	char equation[20];
	char num1,num2;
	int sum=1;
	char operation;
	char* piece;
	printf("Choose the operation you want\n");
	printf("Press 1 for Multiplication\n");
	printf("Press 2 for adding\n");
	printf("Press 3 for subtracting\n");
	printf("Press 4 for dividing\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&operation);
	switch(operation){

	case 1:
		printf("Enter the equation\n");
		fflush(stdout);
		fflush(stdin);
		gets(equation);
		piece = strtok(equation,"*");
		while(piece != NULL){
			num1= atoi(piece);
			sum *= num1;
			piece = strtok(NULL,"*");
		}
		printf("SUM = %d",sum);
		break;
	case 2:
		printf("Enter the equation\n");
		fflush(stdout);
		fflush(stdin);
		gets(equation);
		piece = strtok(equation,"+");
		while(piece != NULL){
			num1= atoi(piece);
			piece = strtok(NULL,"+");
			num2=atoi(piece);
			sum=num1+num2;
			piece = strtok(NULL,"+");

		}
		printf("SUM = %d",sum);
		break;
	case 3:
		printf("Enter the equation\n");
		fflush(stdout);
		fflush(stdin);
		gets(equation);
		piece = strtok(equation,"-");
		while(piece != NULL){
			num1= atoi(piece);
			piece = strtok(NULL,"-");
			num2=atoi(piece);
			sum=num1-num2;
			piece = strtok(NULL,"-");

		}
		printf("SUM = %d",sum);
		break;
	case 4:
		printf("Enter the equation\n");
		fflush(stdout);
		fflush(stdin);
		gets(equation);
		piece = strtok(equation,"/");
		while(piece != NULL){
			num1= atoi(piece);
			piece = strtok(NULL,"/");
			num2=atoi(piece);
			sum=num1/num2;
			piece = strtok(NULL,"/");

		}
		printf("SUM = %d",sum);
		break;
	}


	return 0;
}

