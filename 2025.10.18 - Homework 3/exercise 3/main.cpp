#include <iostream>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	scanf_s("%d %d", &a, &b);
	i = a;
	j = b;
	while (b != 0)
	{
		a %= b;
		a = a + b;
		b = a - b;
		a = a - b;
	}
	printf("%d", (i * j) / a);
	return 0;
}