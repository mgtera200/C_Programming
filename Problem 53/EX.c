#include <stdio.h>
#include <string.h>
int main ()
{
	int n, i, sum=1;
	printf ("Enter a integer: ");
	fflush (stdout);
	scanf ("%d" ,&n);
	if(n>=0)
	{
		for (i=1;i<=n;i++)
		{
			sum=i*sum;
		}
		printf ("Factorial = %d",sum);
	}
	else
		printf("Error!!! Factorial of negative number doesn't exist");
}
