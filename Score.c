#include<stdio.h>

int main()
{
	char n;
	int sum = 0;
	if (n == "Perfect") sum += 30;
	else if (n == "Good") sum += 10;
	else if (n == "Bad") sum += 0;

  printf("Score = %d", sum);
}
