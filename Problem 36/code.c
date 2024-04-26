/*
Given two integers: L and R, Find the maximal value of A xor B where
A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <=
1000
Input format: the input contains two lines first line contains L and next
line contains R.
Output format: The maximum value of A xor B
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>

void max_xor(int L,int R);

int main()
{
	int l,r;

	printf("Enter two numbers L and R \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d",&l,&r);
	max_xor(l,r);

	return 0;


}
void max_xor(int L,int R){

	int i,j;
	int sum=0;
	int temp=0;

	for(i=L; i<=R; i++){

		for(j=i; j<=R; j++){

			temp = i ^ j;
			printf("the value of %d %d is %d\n",i,j,temp);

			if(temp > sum)
			{
				sum = temp;
			}
		}
	}
	printf("the maximum value is %d\n",sum);
}
