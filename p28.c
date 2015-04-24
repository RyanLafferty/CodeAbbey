/*
Ryan Lafferty
ID 28 - Body Mass Index
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i;
	int count;
	double w;
	double h;
	double bmi;
	char buffer[10000];
	char * tok;
	
	i = 0;
	count = 0;
	w = 0;
	h = 0;
	bmi = 0;
	tok = NULL;
	
	for(i = 0; i < 10000; i++)
	{
		buffer[i] = 0;
	}
	
	fgets(buffer, 10000, stdin);
	count = atoi(buffer);
	
	fgets(buffer, 10000, stdin);
	
	tok = strtok(buffer, " ");
	w = atof(tok);
	tok = strtok(NULL, " ");
	h = atof(tok);
	
	bmi = (w / (h*h));
	
	if(bmi < 18.5)
	{
		printf("under ");
	}
	else if(bmi >= 18.5 && bmi < 25.0)
	{
		printf("normal ");
	}
	else if(bmi >= 25 && bmi < 30)
	{
		printf("over ");
	}
	else
	{
		printf("obese ");
	}
	
	
		
	for(i = 0; i < (count-1); i++)
	{
		fgets(buffer, 10000, stdin);
			
		tok = strtok(buffer, " ");
		w = atof(tok);
		tok = strtok(NULL, " ");
		h = atof(tok);
		
		bmi = (w / (h*h));
					
		if(bmi < 18.5)
		{
			printf("under ");
		}
		else if(bmi >= 18.5 && bmi < 25.0)
		{
			printf("normal ");
		}
		else if(bmi >= 25 && bmi < 30)
		{
			printf("over ");
		}
		else
		{
			printf("obese ");
		}
	}
		
	return 0;
}