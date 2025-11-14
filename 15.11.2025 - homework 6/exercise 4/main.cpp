#include <cstdio>

void prost(long long a);

int main(int argc, char** argv)
{
	if (prost == 0)
	{
		printf("error");
	}
	else
	{
		long long x = 0;
		scanf_s("%lld", &x);
		prost(x);
		return 0;
	}
}

void prost(long long a)
{
	int j = 0;
	for (int i = 2; i < a; ++i)
	{
		if ((a % i) == 0)
		{
			j = 1;
			printf("composite");
			break;
		}
	}
	if (j == 0)
	{
		printf("prime");
	}
	return;
}