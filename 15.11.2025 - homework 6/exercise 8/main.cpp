#include <cstdio>

int bin(int n, int k);

int main(int argc, char** argv)
{
	if (bin == 0)
	{
		printf("error");
	}
	else
	{
		int n = 0;
		int k = 0;
		scanf_s("%d %d", &n, &k);
		if (k > n)
		{
			printf("error");
		}
		else
		{
			printf("%d", bin(n, k));
			return 0;
		}
	}
}

int bin(int n, int k)
{
	if (k == 0 || k == n)
	{
		return 1;
	}
	else
	{
		return bin(n - 1, k - 1) + bin(n - 1, k);
	}
}