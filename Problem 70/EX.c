#include <stdio.h>
struct Sstudents {
	char name[50];
	float marks;
};
int main(){
	int i;
	int j=1;
	struct Sstudents x[10];
	printf("Enter elements of 10 students\n");
	for(i=0; i<10; i++){
		printf("For roll number %d:\n",j);
		printf("Enter name:");
		fflush(stdout);
		scanf("%s",&x[i].name[50]);
		printf("Enter marks:");
		fflush(stdout);
		scanf("%f",&x[i].marks);
		printf("\n");
		j++;
	}
	j=1;
	printf("Displaying information of students:\n");
	for(i=0; i<10; i++){
printf("Information for roll number %d:\n",j);
printf("name:%s\n",x[i].name);
printf("marks:%.1f\n",x[i].marks);
j++;
	}
}
