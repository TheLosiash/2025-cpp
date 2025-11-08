#include <cstdio>
#include <cstdlib>
#include <cmath>

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	int j = 0;
	scanf_s("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	if (a == 0)
	{
		printf("error");
		return 1;
	}
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	k = a[0];
	for (int i = 1; i < n; ++i)
	{
		if ( signbit(k) == signbit(a[i]))
		{
			++j;
		}
		k = a[i];
	}
	if (j != 0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	free(a);
	return 0;
}