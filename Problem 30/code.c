/*
Write a C function that returns 1 if the input number is a power of 2
and return 0 if the input number is not power of 2.
For example: 1, 2 and 16 are power of 2.
0, 10 and 30 are not power of 2.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int power(int num);
int main()
{
	int num;
	int result;
	printf("Enter the number\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	result = power(num);
	printf("%d",result);


}
int power(int num){
	if (num == 0)
		        return 0;
		    while (num != 1) {
		        if (num % 2 != 0)
		            return 0;
		        num = num / 2;
		    }
		    return 1;
}
