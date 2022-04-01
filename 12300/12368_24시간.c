#include <stdio.h>

int main()
{
    int i, T, A, B, R;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        R = A + B;
        while (R >= 24)
            R -= 24;

        printf("#%d %d\n", i + 1, R);
    }

    return 0;
}