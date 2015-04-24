/*
Ryan Lafferty
ID 20 - Vowel Count (lower case) - add tolower to deal with upper case characters
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	int count;
	int vCount;
	char buffer[10000];
	char * tok;
	
	i = 0;
	j = 0;
	count = 0;
	vCount = 0;
	tok = NULL;
	
	for(i = 0; i < 10000; i++)
	{
		buffer[i] = 0;
	}

	fgets(buffer, 10000, stdin);
	count = atoi(buffer);

	vCount = 0;
	fgets(buffer, 10000, stdin);
	for(j = 0; j < 10000; j++)
	{
		if(buffer[j] <= 0 || buffer[j] == '\n')
		{
			break;
		}
		else if(buffer[j] == 'a' || buffer[j] == 'e' || buffer[j] == 'i' || buffer[j] == 'o' ||
		        buffer[j] == 'u' || buffer[j] == 'y')
		{
			vCount++;
		}
	}
	printf("%d ", vCount);
			
	for(i = 0; i < (count-1); i++)
	{
		vCount = 0;
		fgets(buffer, 10000, stdin);
		for(j = 0; j < 10000; j++)
		{
			if(buffer[j] <= 0 || buffer[j] == '\n')
			{
				break;
			}
			else if(buffer[j] == 'a' || buffer[j] == 'e' || buffer[j] == 'i' || buffer[j] == 'o' ||
			        buffer[j] == 'u' || buffer[j] == 'y')
			{
				vCount++;
			}
		}
		printf("%d ", vCount);
	}	
	
	return 0;
}