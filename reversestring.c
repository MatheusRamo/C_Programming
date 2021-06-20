#include <stdio.h>



int main()
{

	char str[256], *ptr1, *ptr2, temp;
	int i, j;
	printf("Enter a string: ");
	scanf("%s", str);
	ptr1 = str;
	i = 1;
	while(*ptr1 != '\0')
	{
		ptr1++;
		i++;
	}

	ptr1--;
	ptr2 = str;
	j = 1;

	while(j <= i/2)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1--;
		ptr2++;
		j++;
	}

	printf("\nReverse string is %s\n", str);


	return 0;
}
