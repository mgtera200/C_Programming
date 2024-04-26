/*
Write a C Function that reads two integers and checks if the first is
multiple of the second.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>


int main()
{
	unsigned char num1,num2;
	printf("Enter the two numbers\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%u %u",&num1,&num2);
	if(num1%num2 ==0)
		printf("The first number is a multiple of the second\n");
	else
		printf("The first number isnt a multiple of the second\n");






	}
