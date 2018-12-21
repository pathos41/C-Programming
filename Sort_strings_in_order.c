/*Using qsort() with strings*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 30

int comp(const void *s1, const void *s2);

main()
{
	char *data[MAX], buf[80];
	char *ptr="QUIT";
	int count, count1, result, num;
	time_t start, now;
	double duration;
	
	/*Input a list of words*/
	
	printf("Enter %d words; press Enter after each.\n", MAX);
	
	for(count=0; count<MAX; count++)
	{
		printf("Name %d: ", count+1);
		gets(buf);
			
		data[count]=malloc(strlen(buf)+1);
		strcpy(data[count], buf);
		
		result=strcmp(data[count], ptr);
		
		/*Break the loop if "QUIT" was entered*/
		
		if(result==0)
			break;
	}
	
	/*Sort the words (actually, sort the pointers)*/
	
	start=time(0);
	if(count+1<MAX)
		num=count+1;
	else
		num=MAX;
	
	qsort(data, num, sizeof(data[0]), comp);
	
	/*Count the time elapsed*/
		
	now=time(0);
	duration=difftime(now, start);
		
	/*Display the sorted words*/
	
	for(count1=0; count1<count+1; count1++)
		printf("\n%d: %s", count1+1, data[count1]);

	printf("\nThe time elapsed is %lf seconds.\n", duration);
	return 0;
}

int comp(const void *s1, const void *s2)
{
	return(strcmp(*(char **)s1, *(char **)s2));
}
