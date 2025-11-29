#include <cstdio>
#include <cstdlib>
#include <cmath>

int const N = 100;

typedef struct Point
{
	double x;
	double y;
} point;

double length(point* a, point* b);

int main(int argc, char** argv)
{
	point p[N] = { 0 };
	double m = 0;
	int n = 0;
	scanf_s("%d", &n);
	if (n <= 1)
	{
		printf("error");
		return 1;
	}
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%lf %lf", &p[i].x, &p[i].y);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (length(&p[i], &p[j]) > m)
			{
				m = length(&p[i], &p[j]);
			}
		}
	}
	printf("%.15g", sqrt(m));
	return 0;
}

double length(point* a, point* b)
{
	double l = 0;
	l = (b->x - a->x) * (b->x - a->x) + (b->y - a->y) * (b->y - a->y);
	return l;
}