#include <stdio.h>
#include <math.h>


#define LENGTH 10
#define EMPTY (-1)

int mystack[LENGTH];
int top = EMPTY;

int push(int value)
{
	if(top >= (LENGTH - 1)) return (0);
	top++;
	mystack[top] = value;
	return (1);
}

int pop()
{
	if(top == EMPTY) return EMPTY;
	int result = mystack[top];
	top--;
	return result;
}
int armstrongfind(int number)
{
	int temp, count, digit, j;
	double summ = 0;
	count = 0;
	temp = number;
	while(number > 0)
	{
		digit = (number % 10);
		push(digit);
		count++;
		number = number / 10;
	}

	while(top >= 0)
	{
		j = pop();
		summ = summ + pow(j, count);
	}

	int intsumm = (int)summ;
	number = temp;

	if(number == intsumm) return (1);
	else
		return (0);

}

void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(armstrongfind(num))
	{
		printf("\nThe number %d is an Armstrong Number\n", num);
	}
	else
		printf("\nThe number %d is not an Armstrong Number\n", num);

}
