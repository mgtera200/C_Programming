#include <stdio.h>
#include <string.h>
int main ()
{
	int n, count, sum=0;
	printf ("Enter a integer: ");
	fflush (stdout);
	scanf ("%d" ,&n);
	for (count=1;count<=n;count++)
	{
			sum+=count;
	}
	printf ("sum = %d",sum);
	return 0;
}
