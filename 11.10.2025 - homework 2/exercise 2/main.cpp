#include <iostream>

int main(int argc, char** argv) 
{
	long long a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%lld", &a);
	b = (a % 10) + (a / 10 % 10) + (a / 1000 % 10);
	c = (a / 1000 % 10) + (a / 10000 % 10) + (a / 100000);
	if (c == b)
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}
	return 0;
}