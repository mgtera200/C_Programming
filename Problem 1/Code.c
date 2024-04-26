/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: TERA
 */
#include "stdio.h"
#include "math.h"

/*
Write a program that take two integers from the user
and print the results of this equation:
Result = ((num1 + num2) * 3) – 10
*/
int main(){
	int num1,num2,result=0;
	printf("Enter two integers :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	 result= (num1 + num2)*3-10;
	 printf("Result is %d",result);
}
