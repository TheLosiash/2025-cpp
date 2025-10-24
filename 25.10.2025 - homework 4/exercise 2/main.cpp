#include <iostream>
int const SIZE = 1000;

int main(int argc, char** argv)
{
	int a[SIZE] = { 0 };
	int n = 0;
	int l = 0;
	int r = 0;
	int v = 0;
	int j = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d %d", &l, &r);
	l = l - 1;
	v = a[l];
	j = l;
	for (int i = l; i < r; ++i)
	{
		if (a[i] > v)
		{
			v = a[i];
			j = i;
		}
	}
	printf("%d %d", v, j + 1);
	return 0;
}