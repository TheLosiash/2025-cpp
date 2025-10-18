#include <iostream>

int main(int argc, char** argv)
{
	float x = 0;
	float y = 0;
	int i = 0;
	i = 1;
	scanf_s("%f %f", &x, &y);
	while (x < y)
	{
			x *= 1.15;
			++i;
	}
		printf("%d", i);
	return 0;
}