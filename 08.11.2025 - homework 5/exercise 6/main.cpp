#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
	int n = 0;
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
	for (int i = 1; i < n - 1; ++i)
	{
		if ( a[i] > a[i - 1] && a[i] > a[i + 1])
		{
			++j;
		}
	}
	printf("%d", j);
	free(a);
	return 0;
}