#include <stdio.h>
int main(){
	float a,b,c;
	float discriminant;
	
	printf("Enter a = ");
	scanf("%f",&a);
	printf("Enter b = ");
	scanf("%f",&b);
	printf("Enter c = ");
	scanf("%f",&c);
	
	discriminant = ((b*b) - (4*a*c));
	
	
	if (discriminant==0)
	{
		printf("One Real Root\n");
	}
	else if (discriminant>0)
	{
		printf("Two Real Roots\n");
	}
	else if (discriminant<0)
	{
		printf("Imaginary Roots\n");
	}

	return 0;
}
