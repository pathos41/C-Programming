#include <stdio.h>

main()
{
	/*Convert decimal numbers from 0 to 255 to binary*/
	unsigned char num;
	unsigned char num1=128;
	int num2;
	
	puts("Enter an integer between 0 and 255 to be displayed in binary mode: ");
	scanf("%d", &num);
	
	puts("The integer in binary mode is: ");
	
	while(num1)
	{
		/*Use the bitwise AND operator to decide if the binary digit is 1*/
			
    	num2=num & num1;
		if (num & num1)
        	printf("1");
   	 	else
        	printf("0");
        	
		/*Right-shifted by 1, checks the next binary digit*/
		
    	num1=num1 >> 1;
	}
	printf("\n");
	return 0;
}

