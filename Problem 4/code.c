/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */
#include "stdio.h"
#include "math.h"

/*
Write a program that reads the radius of a circle and
calculates the area and circumference then prints the
results.
*/
int main(){
	float radius,area,circumference=0;
	printf("Enter radius\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&radius);
	area = 3.14*radius*radius;
	circumference = 2*3.14*radius;
	printf("Area = %f\n",area);
	printf("circumference is %f\n",circumference);


}
