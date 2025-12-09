#include <cstdio>

void han(int heig, int fr, int to);

int main(int argc, char** argv)
{
    int heig = 0;
    scanf_s("%d", &heig);
    han(heig, 1, 2);
    return 0;
}

void han(int heig, int fr, int to)
{
    int mid = 0;
    if (heig == 0)
    {
        return;
    }
    mid = 6 - fr - to;
    han(heig - 1, fr, mid);
    printf("Disk %d move from %d to %d\n", heig, fr, to);
    han(heig - 1, mid, to);
}