#include <iostream>
int const SIZE = 1000;

int main(int argc, char** argv)
{
	int a[SIZE] = { 0 };
	int n = 0;
	int min = 0;
	min = 1001;
	int max = 0;
	max = -1001;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == max)
		{
			a[i] = min;
		}
		printf(" %d ", a[i]);
	}
	return 0;
}