/*
Write a C function to check if the input is an even number or an odd
number, if even number return 0 if odd number return 1.
Example:
Input 7, Output = 1 (Odd)
Input 6, Output = 0 (Even)

*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>

int main(){
	int num;
	printf("Enter the number\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	if(num%2==0)
		printf("%d",0);
	else
		printf("%d",1);

	return 0;

}

