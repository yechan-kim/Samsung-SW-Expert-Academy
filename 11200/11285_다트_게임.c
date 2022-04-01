#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, T, s, ts, ar, x, y;
    double tmp;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        ts = 0;

        scanf("%d", &ar);

        for (j = 0; j < ar; j++)
        {
            scanf("%d %d", &x, &y);

            tmp = sqrt(pow(x, 2) + pow(y, 2));

            if (tmp <= 20)
                s = 10;
            else if (tmp <= 40)
                s = 9;
            else if (tmp <= 60)
                s = 8;
            else if (tmp <= 80)
                s = 7;
            else if (tmp <= 100)
                s = 6;
            else if (tmp <= 120)
                s = 5;
            else if (tmp <= 140)
                s = 4;
            else if (tmp <= 160)
                s = 3;
            else if (tmp <= 180)
                s = 2;
            else if (tmp <= 200)
                s = 1;
            else
                s = 0;

            ts += s;
        }

        printf("#%d %d\n", i + 1, ts);
    }

    return 0;
}