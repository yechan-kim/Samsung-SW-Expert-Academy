#include <stdio.h>

int main()
{
    int N, i, j, k, tmp, arr[10];
    scanf("%d", &N);
    for (k = 0; k < N; k++)
    {
        for (i = 0; i < 10; i++)
            scanf("%d", &arr[i]);
        for (i = 0; i < 10; i++)
        {
            for (j = i; j < 10; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
        printf("#%d %d\n", k + 1, arr[9]);
    }
    return 0;
}