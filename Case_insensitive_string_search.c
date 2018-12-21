/*Searching with strstr()*/

#include <stdio.h>
#include <string.h>

main()
{
	char *loc, buf1[80], buf2[80], buf3[80];
	
	/*Input the strings*/
	
	printf("Enter the string to be searched: ");
	gets(buf1);
	printf("Enter the target string: ");
	gets(buf2);
	
	/*Convert all the characters to lowercase in both the */
	/*target string and the string to be searched*/
	
	strcpy(buf3, buf2);
	strlwr(buf1);
	strlwr(buf2);
	
	/*Perform the search*/
	
	loc = strstr(buf1, buf2);
	
	if(loc == NULL)
		printf("No match was found.\n");
	else
		printf("%s was found at position %d.\n", buf3, loc-buf1);
	return 0;
}
