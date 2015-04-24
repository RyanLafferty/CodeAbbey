/*
Ryan Lafferty
ID 2 - Sums in Loop
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	int a;
	int b;
	int sum;
	int count;
	int num;
	char buffer[10000];
	char * tok;
	char * dNum;
	
	i = 0;
	a = 0;
	b = 0;
	sum = 0;
	count = 0;
	num = 0;
	tok = NULL;
	dNum = NULL;
	
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
	
	sum = a + b;
	printf("%d ", sum);
		
	for(i = 0; i < (count-1); i++)
	{
		fgets(buffer, 10000, stdin);
			
		tok = strtok(buffer, " ");
		a = atoi(tok);
		tok = strtok(NULL, " ");
		b = atoi(tok);
			
		sum = a + b;
		printf("%d ", sum);
		
	}
	
	return 0;
}