#include <stdio.h>
#include <string.h>

int main() {
	char arr[15];
	int len,i;
	char* p = arr;
	printf("Input the number of elements to store in the array (max 15):");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&len);
	printf("input %d number of elements in the array : \n ",len);
	for(i=0; i<len; i++){
		printf("element -%d :\n",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",p);
		p++;
	}
	p=arr+(len-1);
printf("The elements of array in reverse order are : \n");
fflush(stdout);
fflush(stdin);
for(i=len; i>0; i--){
	printf("\nElement - %d : %d",i,*p);
	p--;
}


	return 0 ;




}
