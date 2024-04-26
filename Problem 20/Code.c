/*
Write a C Function that prints the cube of any number.

*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int cube(int num);
int main(){
	int num;
	int result;
	printf("Enter the number\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	result = cube(num);
	printf("The cube is %d",result);
	return 0;

}
int cube(int num){
	int sum=1;
	int i;
	for(i=0; i<3; i++)
	{
		sum *= num;
	}
	return sum;
}
