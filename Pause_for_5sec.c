#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <dos.h>

main()
{
	time_t start, now;
	int count;
	double duration;
	
	/*Pause for 5 seconds*/
	
	start=time(0);
	sleep(5);
	time(&now);
	duration=difftime(now, start);
		
	if(duration<5)
		printf(".");
	
	printf("Time has elapsed %lf seconds.\n", duration);
	return 0;
}

