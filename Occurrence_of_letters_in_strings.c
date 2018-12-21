#include <stdio.h>
#include <string.h>

main()
{
	/*Set occurrence of each letter to be 0*/
	
	char buf[80];
	int cnt; 
	int alphabet[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	gets(buf);
	printf("You entered: %s\n", buf);
	
	for(cnt=0; cnt<strlen(buf); cnt++)
	{
		switch(buf[cnt])
		{
			case 'a':
			case 'A':
				alphabet[0]++;
				break;
			case 'b':
			case 'B':
				alphabet[1]++;
				break;
			case 'c':
			case 'C':
				alphabet[2]++;
				break;
			case 'd':
			case 'D':
				alphabet[3]++;
				break;
			case 'e':
			case 'E':
				alphabet[4]++;
				break;
			case 'f':
			case 'F':
				alphabet[5]++;
				break;
			case 'g':
			case 'G':
				alphabet[6]++;
				break;
			case 'h':
			case 'H':
				alphabet[7]++;
				break;
			case 'i':
			case 'I':
				alphabet[8]++;
				break;
			case 'j':
			case 'J':
				alphabet[9]++;
				break;
			case 'k':
			case 'K':
				alphabet[10]++;
				break;
			case 'l':
			case 'L':
				alphabet[11]++;
				break;
			case 'm':
			case 'M':
				alphabet[12]++;
				break;
			case 'n':
			case 'N':
				alphabet[13]++;
				break;
			case 'o':
			case 'O':
				alphabet[14]++;
				break;
			case 'p':
			case 'P':
				alphabet[15]++;
				break;
			case 'q':
			case 'Q':
				alphabet[16]++;
				break;
			case 'r':
			case 'R':
				alphabet[17]++;
				break;
			case 's':
			case 'S':
				alphabet[18]++;
				break;
			case 't':
			case 'T':
				alphabet[19]++;
				break;
			case 'u':
			case 'U':
				alphabet[20]++;
				break;
			case 'v':
			case 'V':
				alphabet[21]++;
				break;
			case 'w':
			case 'W':
				alphabet[22]++;
				break;
			case 'x':
			case 'X':
				alphabet[23]++;
				break;
			case 'y':
			case 'Y':
				alphabet[24]++;
				break;
			case 'z':
			case 'Z':
				alphabet[25]++;
				break;
			default:
				;
		}
	}
	
	/*Display the occurrence of each letter*/
	
	printf("The letter a occurs %d times.\n", alphabet[0]);
	printf("The letter b occurs %d times.\n", alphabet[1]);
	printf("The letter c occurs %d times.\n", alphabet[2]);
	printf("The letter d occurs %d times.\n", alphabet[3]);
	printf("The letter e occurs %d times.\n", alphabet[4]);
	printf("The letter f occurs %d times.\n", alphabet[5]);
	printf("The letter g occurs %d times.\n", alphabet[6]);
	printf("The letter h occurs %d times.\n", alphabet[7]);
	printf("The letter i occurs %d times.\n", alphabet[8]);
	printf("The letter j occurs %d times.\n", alphabet[9]);
	printf("The letter k occurs %d times.\n", alphabet[10]);
	printf("The letter l occurs %d times.\n", alphabet[11]);
	printf("The letter m occurs %d times.\n", alphabet[12]);
	printf("The letter n occurs %d times.\n", alphabet[13]);
	printf("The letter o occurs %d times.\n", alphabet[14]);
	printf("The letter p occurs %d times.\n", alphabet[15]);
	printf("The letter q occurs %d times.\n", alphabet[16]);
	printf("The letter r occurs %d times.\n", alphabet[17]);
	printf("The letter s occurs %d times.\n", alphabet[18]);
	printf("The letter t occurs %d times.\n", alphabet[19]);
	printf("The letter u occurs %d times.\n", alphabet[20]);
	printf("The letter v occurs %d times.\n", alphabet[21]);
	printf("The letter w occurs %d times.\n", alphabet[22]);
	printf("The letter x occurs %d times.\n", alphabet[23]);
	printf("The letter y occurs %d times.\n", alphabet[24]);
	printf("The letter z occurs %d times.\n", alphabet[25]);
	
	return 0;
}
