/*Functions with a variable argument list*/

#include <stdio.h>
#include <stdlib.h>

int *func(int array[], int num);
main()
{
	
	int a, b, c, d, n=4;
	int *result;

	puts("Enter the value of a: ");
	scanf("%d", &a);
	
	puts("Enter the value of b: ");
	scanf("%d", &b);
	
	puts("Enter the value of c: ");
	scanf("%d", &c);
	
	puts("Enter the value of d: ");
	scanf("%d", &d);
	
	/*Initialize the array*/
	
	int array[4]={a, b, c, d};
	
	/*Sort the array and get the largest and smallest numbers*/
	
	result=func(array, n);
	printf("The largest number is %d.\n", *(result+3));
	printf("The smallest number is %d.\n", *result);
	return 0;
}

int *func(int array1[], int num)
{
	int count1, count2;
	int x;
	
	/*Sort the array in ascending order*/
	
	for(count1=1; count1<num; count1++)
	{
		for(count2=0; count2<num-1; count2++)
		{
			if(array1[count2]>array1[count2+1])
			{
				x=array1[count2];
				array1[count2]=array1[count2+1];
				array1[count2+1]=x;
			}
		}
	}
	return array1;
}
