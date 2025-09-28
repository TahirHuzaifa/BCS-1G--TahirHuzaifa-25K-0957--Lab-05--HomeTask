#include <stdio.h>

int main(){
	int hasPrerequisite , isCourseFull;
	
	printf("Type 1 for (yes) and 0 for (No) \n");
	printf("Do you have prerequisite for this course: ");
	scanf("%d",&hasPrerequisite);
	printf("Is this Course full: ");
	scanf("%d",&isCourseFull);
	
	if ((hasPrerequisite==1) && (isCourseFull==1))
	{
		printf("Enrolled successfuly");
	}
	else if ((hasPrerequisite==0) && (isCourseFull==1))
	{
		printf("Cannot enroll: prerequisite missing!");
	}
	else if ((hasPrerequisite==1) && (isCourseFull==0))
	{
		printf("Cannot enroll: Course is Full!");
	}
	else if ((hasPrerequisite==0) && (isCourseFull==0))
	{
		printf("Cannot enroll: prerequisite missing and course is full!");
	}
	
	return 0;
}
