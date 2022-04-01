#include <stdio.h>

int mul(int N)
{
    for (int j = 1; j <= 9; j++)
    {
        for (int k = 1; k <= 9; k++)
        {
            if (j * k == N)
                return 0;
        }
    }

    return 1;
}

int main()
{
    int T, N, m;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        m = mul(N);
        if (m == 0)
            printf("#%d Yes\n", i + 1);
        else if (m == 1)
            printf("#%d No\n", i + 1);
    }

    return 0;
}