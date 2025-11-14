#include <cstdio>

int min(int a, int b, int c, int d);

int main(int argc, char** argv)
{
	if (min == 0)
	{
		printf("error");
	}
	else
	{
		int w = 0;
		int x = 0;
		int y = 0;
		int z = 0;
		scanf_s("%d %d %d %d", &w, &x, &y, &z);
		printf("%d", min(w, x, y, z));
	}
	return 0;
}
int min(int a, int b, int c, int d)
{
	int l = 0;
	l = a < b ? a : b;
	l = l < c ? l : c;
	l = l < d ? l : d;
	return l;
}

