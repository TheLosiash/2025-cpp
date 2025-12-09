#include <cstdio>
#include <cstdlib>

int const N = 100;

typedef struct Point
{
	int x; 
	int y;
} point;

int main(int argc, char** argv)
{
	point p[N] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d %d", &p[i].x, &p[i].y);
	}
	int l = 0;
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (p[i].x * p[i].x + p[i].y * p[i].y > l)
		{
			l = p[i].x * p[i].x + p[i].y * p[i].y;
			k = i;
		}
	}
	printf("%d %d", p[k].x, p[k].y);
	return 0;
} 