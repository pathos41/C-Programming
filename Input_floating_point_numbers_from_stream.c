/*USing character test macros to create an integer*/
/*input function*/

#include <stdio.h>
#include <ctype.h>

float get_float(void);

main()
{
	float x;
	x=get_float();
	
	printf("You entered %f.\n", x);
}

float get_float(void)
{
	int ch, i, cnt, count=0, sign=1;
	float f, j;
	/*Skip over any leading white space*/
	
	while(isspace(ch=getchar()))
		;
		
	/*If the first character is nonnumeric, unget*/
	/*the character and return 0*/
	
	if(ch!='-' && ch!='+' && !isdigit(ch) && !ispunct(ch) && ch!=EOF)
	{
		ungetc(ch, stdin);
		return 0;
	}
	
	/*If the first character is a minus sign, set*/
	/*sign accordingly*/
	
	if(ch=='-')
		sign=-1;
		
	/*If the first character was a plus or minus sign,*/
	/*get the next character*/
	
	if(ch=='+' || ch=='-')
		ch=getchar();
		
	/*Read characters until a nondigit is input. Assign*/
	/*values, multiplied by proper power of 10, to i*/
	
	for(i=0; isdigit(ch); ch=getchar())
	{
		i=10*i+(ch-'0');
	}
	
	if(ispunct(ch))
		ch=getchar();
		
	for(j=0; isdigit(ch); ch=getchar())
	{
		j=10*j+(ch-'0');
		count++;
	}
	
	for(cnt=0; cnt<count;cnt++)
		j=j/10;		
	
	/*Make result negative if sign is negative*/
	
	f=i+j;
	f*=sign;
	
	/*If EOF was not encountered, a nondigit character*/
	/*must have been read in, so unget it*/
	
	if(ch!=EOF)
		ungetc(ch, stdin);
		
	/*Return the input value*/
	
	return f;
}
