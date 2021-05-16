#include <stdio.h>
#include <string.h>

int exist(char str[], char value, int k)
{
	for(int i = 0; i < k; i++)
	{
		if(str[i] == value) return 1;
	}
	return 0;
}

void main()
{
	char str1[80], str2[80];
	int n, i, k;

	printf("Enter a string: ");
	scanf("%s", str1);

	n = strlen(str1);
	str2[0] = str1[0];
	k = 1;
	
	for(i = 1; i < n; i++)
	{
		if(exist(str2, str1[i], k))
		{
			printf("\nThe first repetitive character is %c.\n", str1[i]);
			break;
		}
		else
		{
			str2[k] = str1[i];
			k++;
		}

	}

	if(i == n)
	{
		printf("\nThere is no repetitive character in the string %s\n", str1);
	}

}

