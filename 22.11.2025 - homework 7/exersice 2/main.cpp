#include <cstdio>
#include <string.h>

unsigned char ToUpper(unsigned char c);

int main(int argc, char** argv)
{
	if (ToUpper == 0)
	{
		printf("error");
	}
	else
	{
		char c = 0;
		scanf_s("%c", &c);
		printf("%c", ToUpper(c));
		return 0;
	}
}

unsigned char ToUpper(unsigned char c)
{
	if (c >= 97 && c <= 122)
	{
		return c - 32;
	}
	else
	{
		return c;
	}
}

