#include <cstdio>
#include <string.h>

unsigned char Register(unsigned char c);

int main(int argc, char** argv)
{
	if (Register == 0)
	{
		printf("error");
	}
	else
	{
		char c = 0;
		scanf_s("%c", &c);
		printf("%c", Register(c));
		return 0;
	}
}

unsigned char Register(unsigned char c)
{
	if (c >= 97 && c <= 122)
	{
		return c - 32;
	}
	if (c >= 65 && c <= 90)
	{
		return c + 32;
	}
	else
	{
		return c;
	}
}