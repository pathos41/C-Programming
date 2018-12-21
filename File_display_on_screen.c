#include <stdio.h>
#include <stdlib.h>
#define MAX 255

main()
{
	char filename[80], buf[MAX];
	FILE *fp;
	
	puts("Enter the name of the file to be displayed: ");
	gets(filename);
	
	/*Open the file*/
	
	if((fp=fopen(filename, "rb"))==NULL)
	{
		fprintf(stderr, "Error opening file.");
		exit(1);
	}
	
	/*Read a block of data from the file into memory*/
	
	fread(buf, sizeof(char), MAX, fp);
	fclose(fp);
	
	/*Display the file on screen*/
	
	printf("The file is displayed as follows:\n%s", buf);
	return 0;
}
