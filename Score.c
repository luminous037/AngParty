#include<stdio.h>

int main()
{
        life=1;
	char n;
	int sum = 0;
	if (n == "Perfect") sum += 30;
	else if (n == "Good") sum += 10;
	else if (n == "Bad"){ sum += 0; life--;}

  printf("Score = %d", sum);
}
