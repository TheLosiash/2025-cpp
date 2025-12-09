#include <cstdio>

double pow(double a, int n);

int main(int argc, char** argv)
{
	if (pow == 0)
	{
		printf("error");
	}
	else
	{
		double a = 0;
		int n = 0;
		scanf_s("%lf %d", &a, &n);
		printf("%lf", pow(a, n));
		return 0;
	}
}

double pow(double a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return pow(a, n + 1) / a;
	}
	else
	{
		return (a * pow(a, n - 1));
	}
}