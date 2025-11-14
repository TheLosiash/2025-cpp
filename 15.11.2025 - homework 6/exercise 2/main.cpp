#include <cstdio>

double power(double a, int n);

int main(int argc, char** argv)
{
	if (power == 0)
	{
		printf("error");
	}
	else
	{
		double a = 0;
		int n = 0;
		scanf_s("%lf %d", &a, &n);
		if (n < 0)
		{
			printf("error");
		}
		else
		{
			printf("%lf", power(a, n));
		}
	}
	return 0;
}

double power(double a, int n)
{
	double l = 0;
	l = 1;
	for (int i = 0; i < n; ++i)
	{
		l *= a;
	}
	return l;
}