/*Functions with a variable argument list*/

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

char *func(int num, ...);
char new_string[80];

main()
{
	int n=3;
	char array1[80], array2[80], array3[80];
	char *result;
	
	/*Initialize the strings*/
	
	puts("Enter string 1: ");
	gets(array1);
	
	puts("Enter string 2: ");
	gets(array2);
	
	puts("Enter string 3: ");
	gets(array3);
	
	/*Concatenate the strings and print the result*/
	
	result=func(n, array1, array2, array3);
	printf("The concatenated string is %s.", result);
	return 0;
}

char *func(int num, ...)
{
	/*Declare a variable of type va_list*/
	
	va_list arg_ptr; 
	int count;
	
	/*Initialize the argument pointer*/
	
	va_start(arg_ptr, num);
	
	/*Retrieve each argument in the variable list*/
	
	for(count=0; count<num; count++)
		strcat(new_string, va_arg(arg_ptr, char*));
		
	/*Perform clean-up*/
	
	va_end(arg_ptr);
	
	/*Divide the total by the number of values to get the */
	/*average. Cast the total to type float so the value*/
	/*returned is type float*/
	
	return (new_string);
}
