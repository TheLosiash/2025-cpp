#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int p = 0;
	int c = 0;
	int m = 0;
	scanf_s("%d", &n);
	for (int i = 0; i != n; ++i)
	{
		scanf_s("%d", &p);
		if (p > 0)
		{
			++c;
			if (c > m)
			{
				m = c;
			}
		}
		else
		{
			c = 0;
		}
		
	}	
	printf("%d", m);
	return 0;
}