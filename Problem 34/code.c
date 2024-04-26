/*
Write a C function to count the number of 1’s in an unsigned 32-bit
integer.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>

int bits(unsigned int num);

int main()
{
	unsigned int num;
	int bits_n;
	printf("Enter the number\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%u",&num);
	bits_n = bits(num);
	printf("The number has %d ones",bits_n);


}
int bits(unsigned int num){
	char i;
	char count=0;
	char array[50];
	sprintf(array,"%o",num);
	printf("%s\n",array);
	for(i=0; i<strlen(array); i++)
	{
		switch(array[i])
		{
		case '7': count += 3;
		break;
		case '6': count += 2;
		break;
		case '5': count += 2;
		break;
		case '4': count += 1;
		break;
		case '3': count += 2;
		break;
		case '2': count += 1;
		break;
		case '1': count += 1;
		break;
		case '0': count += 0;
		break;

		}
	}
	return count;



}
