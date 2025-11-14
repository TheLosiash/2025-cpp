#include <cstdio>

bool election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
	if (election == 0)
	{
		printf("error");
	}
	else
	{
		int l = 0;
		bool a = 0;
		bool b = 0;
		bool c = 0;
		int d = 0;
		int e = 0;
		int f = 0;
		scanf_s("%d %d %d", &d, &e, &f);
		a = d;
		b = e;
		c = f;
		l = election(a, b, c);
		printf("%d", l);
	}
	return 0;
}

bool election(bool x, bool y, bool z)
{
	return (x + y + z) >= 2;
}

