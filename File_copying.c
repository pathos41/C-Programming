/*Accessing command-line arguments*/

#include <stdio.h>

int file_copy(char *oldname, char*newname);

main(int argc, char *argv[])
{
	/*Copy the file*/
	
	if(file_copy(argv[1], argv[2])==0)
		puts("Copy operation successful");
	else
		fprintf(stderr, "Error during copy operation");
	return 0;
}

int file_copy(char *oldname, char *newname)
{
	FILE *fold, *fnew;
	int c;
	
	/*Open the source file for reading in binary mode*/
	
	if((fold=fopen(oldname, "rb"))==NULL)
		return -1;
		
	/*Open the destination file for writing in binary mode*/
	
	if((fnew=fopen(newname, "wb"))==NULL)
	{
		fclose(fold);
		return -1;
	}
	
	/*Read one byte at a time from the source; if end of file*/
	/*has not been reached, write the byte to the destination*/
		
	while(1)
	{
		c=fgetc(fold);
		
		if(!feof(fold))
			fputc(c, fnew);
		else
			break;
	}
	
	fclose(fold);
	fclose(fnew);
	
	return 0;
}
