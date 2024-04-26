/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */

 /*
 Write a program that takes three integers, and prints
out the smallest number.
*/
#include "stdio.h"
#include "math.h"

int main(){
	int num1;
	int num2,num3;
	printf("Enter three numbers\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3){
		if(num2>num3){
			printf("Number %d is the smallest",num3);
		}
		else if(num3>num2)
		{
			printf("Number %d is the smallest",num2);
		}

	}

	else if(num2>num3 && num2>num1)
	{
		if(num1>num3){
					printf("Number %d is the smallest",num3);
				}
				else if(num3>num1)
				{
					printf("Number %d is the smallest",num1);
				}
	}
	else if(num3>num2 && num3>num1)
		{
			if(num2>num1){
						printf("Number %d is the smallest",num1);
					}
					else if(num1>num2)
					{
						printf("Number %d is the smallest",num2);
					}
		}
}
