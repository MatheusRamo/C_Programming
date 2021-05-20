#include <stdio.h>



int main()
{
	char str[255];
	int vowels, consonants;
	printf("Enter a sentence: ");
	gets(str);
	vowels = 0;
	consonants = 0;
	int i = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] =='U' || str[i] =='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{
				vowels++;
			}
			else
			{
				consonants++;
			}
		}
		i++;
	}
	printf("\nNumber of vowels are: %d \nNumber of consonants are: %d \n", vowels, consonants);
}
