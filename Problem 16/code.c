/*
Write a program to reverse a number.
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int main(){
int i;
int j=0;
char array[20];
char array2[20];
int result;

printf("Enter the number\n");
fflush(stdin);
fflush(stdout);
gets(array);
i=strlen(array)-1;
for(; i>=0; i--)
{
	array2[j]=array[i];
	j++;

}
result = atoi(array2);
printf("Result is %d",result);

	return 0;
}
