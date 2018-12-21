/*Detecting end of file*/
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 100

main()
{
	char buf[BUFSIZE];
	char filename[60];
	FILE *fp;
	int count=0;
	
	puts("Enter name of text file to display: ");
	gets(filename);
	
	/*Open the file for reading*/	
	
	if((fp=fopen(filename, "r"))==NULL)
	{
		fprintf(stderr, "Error opening file.");
		exit(1);
	}
	
	/*If end of file not reached, read a line and display it*/
	
	while(!feof(fp))
	{
		fgetc(fp);
		count++;
	}
	
	/*If end of file is reached, close the file*/
	/*and print the number of characters in the file*/
	
	fclose(fp);
	printf("The number of characters in file %s is %d", filename, count);
	return 0;
}
