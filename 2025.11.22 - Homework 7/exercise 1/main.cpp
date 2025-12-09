#include <cstdio>
#include <string.h>

bool isDigit(unsigned char c);

int main(int argc, char** argv)
{
	if (isDigit == 0)
	{
		printf("error");
	}
	else
	{
		char c = 0;
		scanf_s("%c", &c);
		if (isDigit(c) == 1)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
		return 0;
	}
}

bool isDigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
