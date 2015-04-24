/*
Ryan Lafferty
ID 7 - Fahrenheit to Celsius
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
	int cel;
	int count;
	double far;
	double rem;
	char buffer[100000];
	char * tok;
	
	i = 0;
	cel = 0;
	count = 0;
	far = 0;
	rem = 0;
	tok = NULL;
	
	for(i = 0; i < 100000; i++)
	{
		buffer[i] = 0;
	}
	
	fgets(buffer, 100000, stdin);
	tok = strtok(buffer, " ");
	count = atoi(tok);

	for(i = 0; i < count; i++)
	{			
		tok = strtok(NULL, " ");
		far = atof(tok);
		far = (far - 32) / 1.8;
		
		rem = (double)(far - ((int)(far)));
		
		if(rem >= 0.5)
		{
			cel = ((int)(far)) + 1;
		}
		else if((rem * - 1) >= 0.5)
		{
			cel = ((int)(far)) - 1;
		}
		else
		{
			cel = (int)(far);
		}
		
		printf("%d ", cel);
	}	
	
	return 0;
}