#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, N, i, j, k, min = 10000, max = 0, tmp = 0, cnt = 0, buy = 0, sell = 0;
    int *list, *sort, *result;

    scanf("%d", &T);
    result = (int *)malloc(sizeof(int) * T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        list = (int *)malloc(sizeof(int) * N);
        sort = (int *)malloc(sizeof(int) * N);

        for (j = 0; j < N; j++)
        {
            scanf("%d", &list[j]);
            sort[j] = list[j];
        }

        for (j = 0; j < N; j++)
        {
            if (max < list[j])
                max = list[j];
            else if (min > list[j])
                min = list[j];
        }

        for (j = 0; j < N; j++)
        {
            for (k = 0; k < N; k++)
            {
                if (sort[j] > sort[k])
                {
                    tmp = sort[k];
                    sort[k] = sort[j];
                    sort[j] = tmp;
                }
            }
        }

        max = sort[0];
        min = sort[N-1];

        for (j = 0; j < N; j++)
        {
            
        }
    }
    for (i = 0; i < T; i++)
    {
        printf("#%d %d", T + 1, result[i]);
    }

    return 0;
}