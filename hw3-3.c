#include <stdio.h>

int digitSum(int n)
{
    int k=0;
    while (n>0)
{
    k+=n%10;
    n/=10;
}
    return k;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int kA=digitSum(a);
    int kB=digitSum(b);

    if (kA<kB||(kA==kB &&a<b))
{
        printf("%d", a);
}
    else
{
        printf("%d", b);
}
}
