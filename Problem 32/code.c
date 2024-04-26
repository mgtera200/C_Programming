/*

In this challenge write a function to add two floating numbers.
Determine the integer floor of the sum. The floor is the truncated float
value, anything after the decimal point is dropped. For instance
floor(1.1+3.05)=floor(4.15)=4
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int add(float num1, float num2);
int main()
{
	float num1,num2;
	int result;
	printf("Enter 2 float numbers\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f",&num1,&num2);
	result = add(num1,num2);
	printf("%d",result);


}
int add(float num1, float num2){
	int sum;
	sum = num1 + num2;
	return sum;
}
