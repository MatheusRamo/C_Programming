#include <stdio.h>
#include <string.h>

int ispalindrome(char word[], char rev[])
{
    int n = strlen(word);
    for(int i = 0; i < n; i++)
    {
        if(word[i] != rev[i])
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    char word[80], reverse[80];
    printf("\nEnter a string: \n");
    scanf("%s", word);
    int n = strlen(word);
    int j = 0;
    
    for(int i = n-1; i >=0; i--)
    {
        reverse[j] = word[i];
        j++;
    }

    reverse[j] = '\0';
    
    if(ispalindrome(word, reverse))
    {
        printf("\nThe %s is a palindrome.\n", word);
    }
    else
    {
        printf("\nThe %s is not a palindrome.\n", word);
    }

}