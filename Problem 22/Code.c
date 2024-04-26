/*
Write a C Function that check if the number if positive or negative.
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int main(){
  char i;
  	printf("Enter the number\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&i);
	if(i>0)
		printf("The number is positive\n");
	else if(i<0)
		printf("The number is negative\n");
	else
		printf("The number is zero\n");

		return 0;

}
