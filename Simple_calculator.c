#include <stdio.h>

float a, b, result;
char notation;

main()
{
	/*Initialize the input arguments*/
	
	puts("Enter a notation: ");
	scanf("%c", &notation);
	
	puts("Enter a number: ");
	scanf("%f", &a);
	
	puts("Enter another number: ");
	scanf("%f", &b);
	
	switch(notation)
	{
		/*The simple calculator works for addition,*/
		/*subtraction, multiplication and division*/
		
		case '+':
			result=a+b;
			printf("The result is %f", result);
			break;
		
		case '-':
			result=a-b;
			printf("The result is %f", result);
			break;
		
		case '*':
			result=a*b;
			printf("The result is %f", result);
			break;
		
		case '/':
			result=a/b;
			printf("The result is %f", result);
			break;
		
		default:
			puts("You entered the wrong notation, please try again!");
	}
	return 0;
}
