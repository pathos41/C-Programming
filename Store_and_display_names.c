#include <stdio.h>
#include <string.h>

main()
{
	char empty[]="\0";
	char fname[80], lname[80], mname[80];
	char *period=".";
	
	/*Enter first name, middle name and last name*/
	
	puts("Enter the first name: ");
	gets(fname);
	
	puts("Enter the middle name: ");
	gets(mname);	
	
	puts("Enter the last name: ");
	gets(lname);
	
	/*Display the name in desired format*/
	
	strncat(empty, fname, 1);
	strcat(empty, period);
	strncat(empty, mname, 1);
	strcat(empty, period);
	strcat(empty, lname);
	printf("The name is %s", empty);
	
	return 0;
}
