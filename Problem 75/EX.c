#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i;
	int len;
	char* p = str;
	printf("input a string :");
	fflush(stdout);
	gets(str);
	len = strlen(str);
	printf("string is : %s\n",p);
	p = p+(len-1);
	printf("rev string is : ");
	for(i=0; i<len; i++){
		printf("%c",*p);
		p--;
	}




	return 0 ;




}
