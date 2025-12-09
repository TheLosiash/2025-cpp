#include <iostream>

int main(int artc, char** argv)
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long d = 0;
	scanf_s("%lld %lld %lld %lld", &a, &b, &c, &d);
	for (long long i = -100; i < 101; ++i)
	{
		if (a * i * i * i + b * i * i + c * i + d == 0)
		{
			printf("%lld ", i);
		}
	}
	return 0;
}