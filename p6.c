/*
Ryan Lafferty
ID 6 - Rounding
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
	int a;
	int b;
	int count;
	int value;
	double sum;
	double rem;
	char buffer[10000];
	char * tok;
	
	i = 0;
	a = 0;
	b = 0;
	count = 0;
	value = 0;
	sum = 0;
	rem = 0;

	tok = NULL;
	
	for(i = 0; i < 10000; i++)
	{
		buffer[i] = 0;
	}
	
	fgets(buffer, 10000, stdin);
	count = atoi(buffer);
	
	fgets(buffer, 10000, stdin);
	
	tok = strtok(buffer, " ");
	a = atoi(tok);
	tok = strtok(NULL, " ");
	b = atoi(tok);
	
	sum = ((double)a) / ((double)b);
	rem = (double)(sum - ((int)(sum)));
	//printf("Sum = %lf\n", sum);
	//printf("Rem = %lf\n", rem);
	
	if(rem >= 0.5)
	{
		value = ((int)(sum)) + 1;
	}
	else if((rem * - 1) >= 0.5)
	{
		value = ((int)(sum)) - 1;
	}
	else
	{
		value = (int)(sum);
	}
	
	printf("%d ", value);
			
	for(i = 0; i < (count-1); i++)
	{
		fgets(buffer, 10000, stdin);
			
		tok = strtok(buffer, " ");
		a = atoi(tok);
		tok = strtok(NULL, " ");
		b = atoi(tok);
		
		sum = ((double)a) / ((double)b);
		rem = (double)(sum - ((int)(sum)));
		//printf("Sum = %lf\n", sum);
		//printf("Rem = %lf\n", rem);
		
		if(rem >= 0.5)
		{
			value = ((int)(sum)) + 1;
		}
		else if((rem * - 1) >= 0.5)
		{
			value = ((int)(sum)) - 1;
		}
		else
		{
			value = (int)(sum);
		}
		
		printf("%d ", value);
	}
		
	return 0;
}