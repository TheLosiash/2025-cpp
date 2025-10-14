#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) 
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int a_min = 0;
	int a_max = 0;
	int a_mid = 0;
	int x_min = 0;
	int x_max = 0;
	int x_mid = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	scanf_s("%d %d %d", &x, &y, &z);
	a_min = min(min(a, b), c);
	a_max = max(max(a, b), c);
	a_mid = a + b + c - a_min - a_max;
	x_min = min(min(x, y), z);
	x_max = max(max(x, y), z);
	x_mid = x + y + z - x_min - x_max;
	if (a_min == x_min && a_mid == x_mid && a_max == x_max)
	{
		printf("Boxes are equal");
	}
	else if (a_min <= x_min && a_mid <= x_mid && a_max <= x_max)
	{
		printf("The first box is smaller than the second one");
	}
	else if (a_min >= x_min && a_mid >= x_mid && a_max >= x_max) 
	{
		printf("The first box is larger than the second one");
	}
	else 
	{
		printf("Boxes are incomparable");
	}
	return 0;
}