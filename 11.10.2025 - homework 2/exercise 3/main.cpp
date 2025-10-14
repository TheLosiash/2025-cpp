#include <iostream>

int main(int argc, char** argv) 
{
	int a = 0;
	scanf_s("%d", &a);
	if (a % 2 == 1 and a > 1)
		printf("%d", a);
	else 
	{
		printf("%d", a / 2);
	}
	return 0;
}