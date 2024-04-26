
/*
Write a C Function that calculate the Fibonacci series using recursive
method.
The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int sum;
void Fibonacci(int num1, int num2);
int main()
{
	int num1=0;
	int num2=1;
	printf("%d,%d,",num1,num2);
	Fibonacci(num1,num2);


}
void Fibonacci(int num1, int num2){
	sum = num1+num2;
	printf("%d,",sum);
	Fibonacci(num2,sum);

}
