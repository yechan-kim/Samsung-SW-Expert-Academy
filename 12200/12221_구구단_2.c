#include <stdio.h>

int main()
{
    int i, T, A, B, R;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        if (A >= 10 || B >= 10)
            R = -1;
        else
            R = A * B;

        printf("#%d %d\n", i + 1, R);
    }

    return 0;
}