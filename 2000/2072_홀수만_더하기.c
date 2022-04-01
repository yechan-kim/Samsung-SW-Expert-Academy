#include <stdio.h>

int main()
{
    int i, j, T, sum = 0, C[10];
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &C[j]);
            if (C[j] % 2 != 0)
                sum += C[j];
        }
        printf("#%d %d\n", i + 1, sum);
        sum = 0;
    }
}