/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */
#include "stdio.h"
#include "math.h"

/*
Write a program for converting temperature from
degrees Celsius to degrees Fahrenheit,
given the formula:
9
F = C x 5 + 32
*/
int main(){
	int C;
	float F;
	printf("Enter temp in degrees\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&C);
	F = C*(9/5)+32;
	printf("Temp in Fahrenheit is %f",F);

}
