/*
Ryan Lafferty
ID 2 - Sum in Loop
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	int sum;
	int count;
	int num;
	char buffer[10000];
	char * tok;
	
	i = 0;
	sum = 0;
	count = 0;
	num = 0;
	tok = NULL;
	
	for(i = 0; i < 10000; i++)
	{
		buffer[i] = 0;
	}
	
	fgets(buffer, 10000, stdin);
	count = atoi(buffer);
	
	fgets(buffer, 10000, stdin);
	
	tok = strtok(buffer, " \n\t");
	sum = atoi(tok);
	num = atoi(tok);
	printf("current num: %d\n", num);
	
	for(i = 0; i < (count-1); i++)
	{
		tok = strtok(NULL, " \n\t");
		num = atoi(tok);
		printf("current num: %d\n", num);
		sum += atoi(tok);
	}
	
	printf("Sum  = %d\n", sum);
	
	return 0;
}