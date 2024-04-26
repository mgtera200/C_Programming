/*
You are designing a poster which prints out numbers with a unique
style applied to each of them. The styling is based on the number of
closed paths or holes present in a giver number. The number of holes
that each of the digits from 0 to 9 have are equal to the number of closed
paths in the digit. Their values are:
• 1, 2, 3, 5 and 7 = 0 holes.
• 0, 4, 6, and 9 = 1 hole.
• 8 = 2 holes.
Given a number, you must determine the sum of the number of holes for
all of its digits. For example, the number 819 has 3 holes.
Function Description
Complete the function countHoles. The function must return an integer
denoting the total number of holes in num.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>

int countholes(char* number, char length);
int main()
{
	char array[20];
	int holes;
	int i;
	printf("Enter the number \n");
	fflush(stdout);
	fflush(stdin);
	gets(array);
	i = strlen(array);
	holes = countholes(array,i);
	printf("The number has %d holes",holes);



}
int countholes(char* number, char length){
char count=0;
char i;
for(i=0; i<length; i++)
{
	if((*number == '0') || (*number == '4') || (*number == '6') ||(*number == '9'))
	{
		count++;
		number++;
	}
	else if ((*number == '8'))
	{
		count += 2;
		number++;
	}
	else{
		number++;
	}

}
return count;

}
