#include <stdio.h>

int main(){
	char room , action;
	printf("L = (living room) and K = (kitchen)\n");
	printf("Enter room: ");
	scanf("%c",&room);
	printf("L = (lights) and T = (thermostat)\n");
	printf("Enter desired action: ");
	scanf(" %c",&action);
	
	switch(room)
	{
		case 'L': switch(action)
				  {
				  	case 'L': printf("Adjusting ambient lighting");
				  	case 'T': printf("Setting living room temperature");
				  }
	    
		case 'K': switch(action)
				  {
				  	case 'L': printf("Turning on bright task lighting");
				  	case 'T': printf("Setting kitchen temperature");
				  }
	}

	return 0;
}
