#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	a = 1;
	int b = 0;
	int n = 0;
	int c = 0;
	int i = 0;
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf("0");
	}
	else if (n == 1)
	{
		printf("1");
	}
	else 
	{
		while (i != n - 1)
		{
			c = a + b;
			b = a;
			a = c;
			++i;
		}
		printf("%d", c);
	}
	return 0;
}