#include <cstdio>
#include <cstdlib>
#include <string.h>

int const N = 50;

typedef struct Students
{
	char s[N];
	char n[N];
	int a;
	int b;
	int c;
} stud;

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	stud p[N];
	double m = 0;
	double f = 0;
	double j = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%s %s %d %d %d", p[i].s, (unsigned)sizeof(p[i].s), p[i].n, (unsigned)sizeof(p[i].n), &p[i].a, &p[i].b, &p[i].c);
		m += p[i].a;
		f += p[i].b;
		j += p[i].c;
	}
	double mm = 0;
	double ff = 0;
	double jj = 0;
	mm = m / n;
	ff = f / n;
	jj = j / n;
	printf("%.6lf %.6lf %.6lf", mm, ff, jj);
	return 0;
}

