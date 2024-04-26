/*
Write a C Function that display Prime Numbers between Intervals (two
numbers) by Making Function.
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>


int main()
{
	int num1,num2,i,j;
	char flag=0;
	printf("Enter the two numbers\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	for(i=num1; i<=num2; i++)
	{
		if(i==2){
			printf("%d\t",i);
		}
		else if(i<2)
		{
			continue;
		}
		else
		{
			for(j=2; j<=i/2; j++)
			{
				if(i%j==0)
				{
					flag++;
					break;
				}
				flag=0;

			}
			if(flag==0){
			printf("%d\t",i);
			}
		}

	}





	}
