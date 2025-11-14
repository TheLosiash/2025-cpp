#include <cstdio>

int phi(int n);

int main(int argc, char** argv)
{
	if (phi == 0)
	{
		printf("error");
	}
	else
	{
		int n = 0;
		scanf_s("%d", &n);
		printf("%d", phi(n));
		return 0;
	}
}

int phi(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return phi(n - 1) + phi(n - 2);
	}
}