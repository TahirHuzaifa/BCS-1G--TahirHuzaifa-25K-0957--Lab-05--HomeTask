#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if (age<=0)
	{
		printf("Invalid Age\n");
	}
	else if (age<5)
	{
		printf("Free\n");
	}
	else if (age>65)
	{
		printf("Discount\n");
	}
	else if (age>=5 && age<=65)
	{
		printf("Standard\n");
	}
	return 0;
}
