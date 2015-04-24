/*
Ryan Lafferty
ID 40 - Median of Three
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
	int a;
	int b;
	int c;
	int count;
	char buffer[10000];
	char * tok;
	
	i = 0;
	a = 0;
	b = 0;
	c = 0;
	count = 0;
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
	tok = strtok(NULL, " ");
	c = atoi(tok);
	
	if((a >= b && a <= c) || (a >= c && a <= b))
	{
		printf("%d ", a);
	}
	else
	{
		if((b >= a && b <= c) || (b >=c && b <= a))
		{
			printf("%d ", b);
		}
		else
		{
			printf("%d ", c);
		}
	}
		
	for(i = 0; i < (count-1); i++)
	{
		fgets(buffer, 10000, stdin);
			
		tok = strtok(buffer, " ");
		a = atoi(tok);
		tok = strtok(NULL, " ");
		b = atoi(tok);
		tok = strtok(NULL, " ");
		c = atoi(tok);
		
		if((a >= b && a <= c) || (a >= c && a <= b))
		{
			printf("%d ", a);
		}
		else
		{
			if((b >= a && b <= c) || (b >=c && b <= a))
			{
				printf("%d ", b);
			}
			else
			{
				printf("%d ", c);
			}
		}
	}
		
	return 0;
}