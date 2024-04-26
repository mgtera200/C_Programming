
/*
Write a C function that calculates the required heater activation time
according to the input temperature of water.
- if input temperature is from 0 to 30, then required heating time = 7
mins.
- if input temperature is from 30 to 60, then required heating time = 5
mins.
- if input temperature is from 60 to 90, then required heating time = 3
mins.
- if input temperature is more than 90, then required heating time = 1
mins.
- if temperature is invalid (more than 100), return 0
Example:
Input = 10 → output = 7
Input = 35 → output = 5
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
char time(int num);
int main()
{
	int num;
	int result;
	printf("Enter the temp\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);
	result = time(num);
	printf("%d",result);


}
char time(int num){
	if(num<30 && num>0)
		return 7;
	else if (num<60 && num>30)
		return 5;
	else if (num<90 && num>60)
		return 3;
	else if (num>90 && num<100)
		return 1;
	else
		return 0;


}
