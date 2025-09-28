#include <stdio.h>

int main(){
	int permissions;
	printf(" 1 = READ, 2 = WRITE , 4 = EXECUTE\n");
	printf("Enter permissions value: ");
	scanf("%d",&permissions);
	
	if ((permissions & 4) != 0)
	{
		printf("Access granted: full control");
	}
	else
	{
		if (((permissions & 1) != 0)  &&  ((permissions & 2) != 0))
		{
			printf("Access granted: read and write");
		}
		else if ((permissions & 1) != 0)
		{
			printf("Access granted: read only");
		}
		else
		{
			printf("Access denied");
		}
	}

	return 0;
}
