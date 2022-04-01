#include <stdio.h>
int main()
{
    int N, a, b, c;
    scanf("%d", &N);
    a = N / 1000;
    N %= 1000;
    b = N / 100;
    N %= 100;
    c = N / 10;
    N %= 10;
    printf("%d", a + b + c + N);
    return 0;
}