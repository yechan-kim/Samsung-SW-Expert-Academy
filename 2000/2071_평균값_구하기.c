#include <stdio.h>

int main()
{
    int i, j, T, sum = 0, avg = 0, C[10];
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &C[j]);
            sum += C[j];
        }
        avg = sum / 10;
        if (sum % 10 >= 5)
            avg += 1;
        printf("#%d %d\n", i + 1, avg);
        sum = 0;
        avg = 0;
    }
}