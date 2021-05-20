#include <stdio.h>
#include <string.h>


int exist(char str[], char value, int count[], int x)
{
	int i;
	for(i = 0; i <= x; i++)
	{
		if(str[i] == value)
		{
			count[i]++;
			return 1;
		}

	}
	if(i > x) return 0;
}


void main()
{
	char str[80], chr[80];
	int n, x, count[80];

	printf("Enter a string: ");
	scanf("%s", str);
	n = strlen(str);
	chr[0] = str[0];
	count[0] = 1;
	x = 0;

	for(int i = 1; i < n; i++)
	{
		if(!exist(chr, str[i], count, x))
		{
			x++;
			chr[x] = str[i];
			count[x] = 1;
		}

	}

	printf("\nThe count of each character in the string %s is \n", str);
	for(int i = 0; i <= x; i++)
	{
		printf("%c \t %d \n", chr[i], count[i]);
	}
}
