
/*
Write a program to count number of digits in a
decimal number.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int main(){
int i;
char array[20];

printf("Enter the number\n");
fflush(stdin);
fflush(stdout);
gets(array);
i=strlen(array);

printf("Number of digits is %d",i);

	return 0;
}
