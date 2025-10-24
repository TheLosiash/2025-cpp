#include <iostream>
#include <cmath>
int const SIZE = 1000;

int main(int argc, char** argv)
{
	int a[SIZE] = { 0 };
	int n = 0;
	int x = 0;
	int j = 0;
	int k = 0;
	double d = 0;
	j = 10000;
	k = 10000;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i)
	{
		d = fabs(a[i] - x);
		if (j > d)
		{
			j = d;
			k = a[i];
		}
		else if (d == j)
		{
			if (a[i] < k)
			{
				k = a[i];
			}
		}
	}
	printf("%d", k);
	return 0;
}