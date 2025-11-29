#include <cstdio>
#include <cstdlib>

int const N = 100;

typedef struct Point
{
	double x;
	double y;
} point;

int main(int argc, char** argv)
{
	double k = 0;
	double l = 0;
	point m = { 0 };
	point p[N] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%lf %lf", &p[i].x, &p[i].y);
		k += p[i].x;
		l += p[i].y;
	}
	m.x = k / n;
	m.y = l / n;
	printf("%.15g %.15g", m.x, m.y);
	return 0;
}