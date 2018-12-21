#include <stdio.h>
#define LENGTH 12

/*Set pointer to the array*/

int count1, count2;
char array[LENGTH][LENGTH];
char (*ptr)[LENGTH];	
void printarray_1(char (*ptr)[LENGTH]);

main()
{
	/*Initialize the array*/
	
	for(count1=0; count1<LENGTH; count1++)
	{
		for(count2=0; count2<LENGTH; count2++)
		{
			array[count1][count2]='X';
		}
	}
	
	/*Set ptr to point to the first element of array*/
	
	ptr=array;	
	int count;
	
	for(count1=0; count1<LENGTH; count1++)
	{
		printarray_1(ptr++);
		printf("\n");
	}
	return 0;
}

void printarray_1(char (*ptr)[LENGTH])
{
	char *p;
	p=(char*)ptr;
	
	/*Print every element of the array*/
	
	for(count2=0; count2<LENGTH; count2++)
	{
		printf("%c", *p++);
	}
}
