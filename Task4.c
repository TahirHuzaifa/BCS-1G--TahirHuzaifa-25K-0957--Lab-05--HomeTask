#include <stdio.h>
#include <string.h>
int main(){
	char username[30];
	char password[10];
	
	printf("Enter UserName: \n");
	fgets(username, sizeof(username), stdin);
	// remove newline
    int len = strlen(username);
    if (username[len-1] == '\n')
        {
        	username[len-1] = '\0';
		}
	
	if (strcmp(username,"Tahir Huzaifa") != 0)
	{
		printf("Username not found\n");
	}
	else
	{
		printf("Enter Password: \n");
		fgets(password, sizeof(password), stdin);
		// remove newline
    	int len = strlen(username);
    	if (username[len-1] == '\n')
        	{
        		username[len-1] = '\0';
			}
		
		if (strcmp(password,"tahir1234") != 0)
		{
			printf("Incorrect Password\n");
		}
		else
		{
			printf("Logged In Successfully\n");
		}
	}
	
	
	return 0;
}
