#include <stdio.h>
void prime(int n1,int n2);
int main()
{
	int num1, num2;
	printf("Enter two numbers(intervals)\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("prime numbers between %d and %d are:\t",num1,num2);
	prime(num1,num2);
}
void prime(int n1, int n2)
{

	for(int i=n1+1; i<=n2; i++)
	{
		int check=1;
		for(int count=2; count<=i/2; count++)
		{
			if(i%count==0)
			{
				check=0;
				break;
			}
		}
		if(check)
			printf("%d\t",i);

	}
}
