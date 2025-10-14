#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	i = 1;
	if (a != 0) 
	{
		printf("%d", a);
		i = 0;
	}
	if (b != 0) 
	{
		if (!i && b > 0)
		{
			printf("+");
		}
		if (b == -1) 
		{
			printf("-");
		}
		else if (b != 1)
		{      
			printf("%d", b);
		}
		printf("x");
		i = 0;
	}
	if (c != 0) 
	{
		if (!i && c > 0) 
		{
			printf("+");
		}
		if (c == -1) 
		{
			printf("-");
		}
		else if (c != 1) 
		{
			printf("%d", c);
		}
		printf("y");
		i = 0;
	}
	if (i == 1) 
	{
		printf("0");
	}
	return 0;
}