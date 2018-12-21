/*Inputs a list of floating numbers from the keyboard, sorts them,*/
/*in ascending order, and then displays them on the screen*/

#include <stdlib.h>
#include <stdio.h>

#define MAXLINES 10
int count;
void sort(float *p[], int n, int sort_type);
void print_strings(float *p[], int n);
float *lines[MAXLINES];

main()
{
	puts("Enter a floating number: ");
	
	/*Initialize the array of pointers*/
	
	for(count=0; count<MAXLINES; count++)
	{
		lines[count]=(float*)malloc(sizeof(float));		
		scanf("%f", lines[count]);
	}
	
	/*Decide the sort order*/
	
	int sort_type;
	puts("Enter sort type, 0 for ascending and 1 for descending: ");
	scanf("%d", &sort_type);
	
	/*Sort the array*/
	
	sort(lines, MAXLINES, sort_type);
	print_strings(lines, MAXLINES);
	return 0;
}

void sort(float *p[], int n, int sort_type)
{
	int a,b;
	float *x;
	
	/*The pointer to a function*/
	
	/*Initialize the pointer to point to the proper comparison*/
	/*function depending on the argument sort_type*/
	
	/*Sort in ascending order*/
	
	if(!sort_type)
		for(a=1; a<n; a++)
		{
			for(b=0; b<n-1; b++)
			{
				if(*p[b]>*p[b+1])
				{
					x=p[b];
					p[b]=p[b+1];
					p[b+1]=x;
				}
			}
		}
		
	/*Sort in descending order*/
		
	else
		for(a=1; a<n; a++)
		{
			for(b=0; b<n-1; b++)
			{
				if(*p[b]<*p[b+1])
				{
					x=p[b];
					p[b]=p[b+1];
					p[b+1]=x;
				}
			}
		}
}	/*End of sort()*/

void print_strings(float *p[], int n)
{
	int count;
	
	puts("The floating numbers entered in ascending order are: ");
	
	/*Print the results*/
	
	for(count=0; count<n; count++)
		printf("%f\n", *p[count]);
}
