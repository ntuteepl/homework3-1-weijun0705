#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int L[3][2]={{a,b},{c,d},{e,f}};

    for(int i=0;i<3;i++)
{
    for(int j=i+1;j<3;j++)
{
    if(L[i][1]>L[j][1])
{
    int l[2]={L[i][0],L[i][1]};
        L[i][0]=L[j][0];
        L[i][1]=L[j][1];
        L[j][0]=l[0];
        L[j][1]=l[1];
}
}
}
int cars=1;
int back = L[0][1];
    for(int i=1;i<3;i++)
{
    if(L[i][0]>=back)
{
    back=L[i][1];
}
    else
{
    cars++;
}
}
printf("%d", cars);
}

