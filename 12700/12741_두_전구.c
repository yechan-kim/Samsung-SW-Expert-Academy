#include <stdio.h>

int main()
{
    int i, T, A, B, C, D, S, E, R;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &A, &B, &C, &D);

        if (A > C)
            S = A;
        else
            S = C;
        if (B < D)
            E = B;
        else
            E = D;

        R = E - S;
        if (R < 0)
            R = 0;

        printf("#%d %d\n", i + 1, R);
    }

    return 0;
}