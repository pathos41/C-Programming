#include <stdio.h>
#include <stdlib.h>
void func(void);

main()
{
	atexit(func);
	return 0;
}

void func(void)
{
	char tempname[80];
	FILE *tmpfile;
	tmpnam(tempname);
	
	/*Create a temporary file for writing*/
	
	tmpfile=fopen(tempname, "w");
	fclose(tmpfile);
	remove(tempname);
	
	/*The temporary file is closed and */
	/*deleted when the program terminates.*/
}
