#include <iostream>
int const SIZE = 1000;

int main(int argc, char** argv)
{
	int a[SIZE] = {0};
	int n = 0;
	int x = 0;
	int j = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			++j;
		}
	}
	printf("%d", j);
	return 0;
}