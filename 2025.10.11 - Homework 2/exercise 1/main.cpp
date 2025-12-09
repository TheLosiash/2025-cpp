#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
	char a = 0;
	char b = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int i = 0;
	scanf_s("%c%d %c%d", &a, 1, &y, &b, 1, &z);
	x = a - 'A' + 1;
	w = b - 'A' + 1;
	if ((fabs(w - x) == 0) ^ (fabs(z - y) == 0))
	{
		printf(" Rook");
		i += 1;
	}
	if ((x == w) && (y != 1) && ((z - y == 1) xor ((z - y == 2) && (y == 2))))
	{
		printf(" Pawn");
		i += 1;
	}
	if (((fabs(w - x) == 1) && (fabs(z - y) == 2)) ^ ((fabs(w - x) == 2) && (fabs(z - y) == 1)))
	{
		printf(" Knight");
		i += 1;
	}
	if (fabs(w - x) == fabs(z - y))
	{
		printf(" Bishop");
		i += 1;
	}
	if ((fabs(w - x) < 2) && (fabs(z - y) < 2))
	{
		printf(" King");
		i += 1;
	}
	if ((w - x == 0 or z - y == 0) or (fabs(w - x) == fabs(z - y)))
	{
		printf(" Queen");
		i += 1;
	}
	if (i == 0)
	{
		printf(" Nobody");
	}
	return 0;
}