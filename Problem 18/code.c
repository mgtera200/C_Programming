/*
Write a program to display half pyramid using stars
pattern.
*
* *
* * *
* * * *
* * * * *
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
