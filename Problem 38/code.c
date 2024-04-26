/*
Write a C function that return 0 if a given number is a power of 3,
otherwise return 1 (except 3 to the power of 0).
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>

char power_3(int num);

int main()
{
	int num,result;

	printf("Enter The number\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	result = power_3(num);
	printf("The result is %d",result);

	return 0;


}
char power_3(int num){

	if(num <=3 )
		return 1;
	while(num != 1){
		if(num % 3 ==0){
			num /= 3;
		}
		else if(num%3 != 0) {
			return 1;
		}

	}
	return 0;

}
