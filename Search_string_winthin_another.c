/*Searching with strstr()*/

#include <stdio.h>
#include <string.h>
int number_of_times(char *p1, char *p2);

main()
{
	char buf1[80], buf2[80];
	int result;
	
	/*Input the strings*/
	
	printf("Enter the string to be searched: ");
	gets(buf1);
	printf("Enter the target string: ");
	gets(buf2);
	
	result=number_of_times(buf1, buf2);
	
	/*Display the search results*/
	
	if(result == 0)
		printf("No match was found.\n");
	else
		printf("%s was found %d times.\n", buf2, result);
	return 0;
}

int number_of_times(char *p1, char *p2)
{
	int n, count=0;
	char *loc;
	
	while(1)
	{
		/*Search for the target string*/
		
		if((loc = strstr(p1, p2))!=NULL)
			count++;
		else
			break;
		
		for(n=0; n<strlen(p2); n++)
			loc++;
		
		/*Move the pointer in order to start the next search*/
		
		p1=loc;
	}
	return count;
}
