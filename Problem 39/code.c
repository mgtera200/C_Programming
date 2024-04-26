/*
Write a C function to count the maximum number of consecutive 1’s
in an unsigned 16 bits integer.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>

int bits(unsigned short num);

int main()
{
	unsigned short num;
	int bits_n;
	printf("Enter the number\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%u",&num);
	bits_n = bits(num);
	printf("The number has maximum %d of consecutive ones",bits_n);


}
int bits(unsigned short num){
	char count=0;
	while(num!=0){
		num = num &(num<<1);
		count++;
	}
	return count;
}
