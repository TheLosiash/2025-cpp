#include <iostream>

int main(int argc, char** argv)
{
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	scanf_s("%d %d", &x, &y);
	scanf_s("%d %d", &w, &z);
	if (x == w && ((y == 2 && (z == 3 || z == 4)) || (z == y + 1 && y > 1 && y < 8))) 
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}