#include <stdio.h>
#include <string.h>

char* compare_strings(char*, char*);

main()
{
	char *a="Hello";
	char *b="World!";
	char *longer;
	
	longer=compare_strings(a,b);
	
	/*Display the result*/
	
	printf("The longer string is: %s\n", longer);
	
	return 0;
}

char *compare_strings(char*first, char*second)
{
	/*Get the length of the strings*/
	
	int x, y;
	x=strlen(first);
	y=strlen(second);
	
	/*Compare the length*/
	
	if(x>y)
		return(first);
	else
		return(second);
}
