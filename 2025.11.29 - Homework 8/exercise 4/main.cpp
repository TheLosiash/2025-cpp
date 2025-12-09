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

double perim(point* a, point* b, point* c);

int main(int argc, char** argv)
{
	point p[N] = { 0 };
	double m = 0;
	int n = 0;
	scanf_s("%d", &n);
	if (n <= 2)
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
		for (int j = i + 1; j < n; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				if (perim(&p[i], &p[j], &p[k]) > m)
				{
					m = perim(&p[i], &p[j], &p[k]);
				}
			}
		}
	}
	printf("%.15g", m);
	return 0;
}

double length(point* a, point* b)
{
	double l = 0;
	l = (b->x - a->x) * (b->x - a->x) + (b->y - a->y) * (b->y - a->y);
	return sqrt(l);
}

double perim(point* a, point* b, point* c)
{
	double p = 0;
	p = length(a, b) + length(a, c) + length(b, c);
	return p;
}