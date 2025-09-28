#include <stdio.h>
int main(){
	int power;
	char LightColour;
	printf("Enter power status, 1(On) and 0(off): ");
	scanf("%d",&power);
	
	if (power == 1)
	{
		printf("Red(R) , Yellow(Y) , Green(G)\n");
		printf("Enter Light Colour: ");
		scanf(" %c",&LightColour);
		
		switch(LightColour)
		{
			case 'R': printf("Action = Stop\n");
					break;
			case 'Y': printf("Action = Caution\n");
					break;
			case 'G': printf("Action = Go\n");
					break;
		}
	}
	else
	{
		printf("Signal Off\n");
	}
	return 0;
}
