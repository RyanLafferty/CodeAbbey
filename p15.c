/*
Ryan Lafferty
ID 15 - Maximum of array
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
	int num;
	int min;
	int max;
	char buffer[100000];
	char * tok;
	
	i = 0;
	num = 0;
	min = INT16_MAX;
	max = INT16_MIN;
	tok = NULL;
	
	for(i = 0; i < 100000; i++)
	{
		buffer[i] = 0;
	}
	
	fgets(buffer, 100000, stdin);
	tok = strtok(buffer, " ");
	num = atoi(tok);
	
	if(num < min)
	{
		min = num;
	}
	if(num > max)
	{
		max = num;
	}
		
	for(i = 1; i < 300; i++)
	{
		tok = strtok(NULL, " ");
		num = atoi(tok);
		
		if(num < min)
		{
			min = num;
		}
		if(num > max)
		{
			max = num;
		}
	}
	
	printf("%d %d\n", max, min);
		
	return 0;
}