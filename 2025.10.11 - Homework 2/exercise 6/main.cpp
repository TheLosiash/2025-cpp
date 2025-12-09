#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	float x = 0;
	float y = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else
		{
			x = ((-1) * c) / b;
			printf("1\n");
			printf("%f\n", x);
		}
		return 0;
	}
	if (d > 0)
	{
		x = (((-1) * b + sqrt(d)) / (2 * a));
		y = (((-1) * b - sqrt(d)) / (2 * a));
		printf("2\n");
		printf("%f\n", x);
		printf("%f\n", y);
	}
	else if (d == 0)
	{
		x = ((-1) * b) / (2 * a);
		printf("1\n");
		printf("%f\n", x);
	}
	else
	{
		printf("0\n");
	}
	return 0;
}