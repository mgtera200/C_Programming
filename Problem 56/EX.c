#include <stdio.h>
int main(){
int n, i;
float num[100], sum=0.0, average;
printf("Enter the numbers of data: ");
fflush(stdout);
fflush(stdin);
scanf("%d", &n);
while (n>100 || n<=0)
{
printf("Error! number should in range of (1 to 100).\n");
fflush(stdout);
fflush(stdin);
printf("Enter the number again: ");
fflush(stdout);
fflush(stdin);
scanf("%d", &n);
}
for(i=0; i<n; ++i)
{
	printf("%d. Enter number: ",i+1);
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&num[i]);
	sum+=num[i];
}

average=sum/n;
printf("Average = %.2f", average);
fflush(stdout);
fflush(stdin);
return 0;
}
