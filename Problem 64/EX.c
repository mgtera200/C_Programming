#include <stdio.h>
int fac(int n);
int main()
{
	int n;
	printf("Enter an positive integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	printf("Factorial of %d = %d",n ,fac(n));
	return 0;
}

int fac(int n)
{
	if(n!=1)
		return n*fac(n-1);
}
