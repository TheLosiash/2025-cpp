#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
	int n = 0;
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
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			printf(" %d", a[i]);
		}
	}
	free(a);
	return 0;
}