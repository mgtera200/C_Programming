/*
 * main.c
 *
 *  Created on: Mar 22, 2023
 *      Author: MOHTERA
 */
#include <stdio.h>
int main()
{
	float a ,b ,c;
	printf("Enter three numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&a ,&b ,&c);
	if(a>b)
	{
		if(a>c)
			printf("Largest number is: %f",a);
		else
			printf("Largest number is: %f",c);
	}
	else if(b>a)
	{
		if(b>c)
			printf("Largest number is: %f", b);
		else
			printf("Largest number is: %f", c);
	}
	else
		printf("There is two equal numbers");
}
