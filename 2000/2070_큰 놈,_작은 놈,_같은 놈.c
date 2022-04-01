#include <stdio.h>
int main()
{
    int T, A, B;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        if (A > B)
            printf("#%d >\n", i + 1);
        else if (A < B)
            printf("#%d <\n", i + 1);
        else
            printf("#%d =\n", i + 1);
    }
    return 0;
}