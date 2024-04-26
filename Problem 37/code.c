/*
Given a positive integer z, check if z can be written as 𝑝𝑞 , where p
and q are positive integers than 1, if z can be written as 𝑝𝑞 return 1 else
return 0.
Description:
A positive integer that needs to be determined if it can be expressed as a
power of square number.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int main(){
	int i, j, rows;

	printf("Enter number of rows: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&rows);
	printf("\n");
	for(i=1; i<=rows; ++i)
	{
		for(j=1; j<=i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;

}
