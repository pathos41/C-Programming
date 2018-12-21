#include <stdio.h>

#define MAX 5

/*Array initialization*/

int x[MAX]={1,2,3,4,5};
int y[MAX]={6,7,8,9,10};
int *ptr;
int count;
int array3[MAX];
int addarrays(int array1[], int array2[]);

main()
{
	ptr=addarrays(x, y);
	
	printf("\nx[]\ty[]\tz[] ");
	printf("\n============================== ");
	
	/*Display the results*/
	
	for(count=0; count<MAX; count++)
	{
		printf("\n%d\t%d\t%d ", x[count], y[count], *(ptr+count));
	}
	printf("\n============================== ");
	
	return 0;
}

int addarrays(int array1[], int array2[])
{
	int length=MAX;
	
	/*Element-wise array addition*/

	for(count=0; count<length; count++)
	{
		array3[count]=array1[count]+array2[count];
	}
	return array3;
}
