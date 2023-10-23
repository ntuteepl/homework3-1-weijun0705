include <stdio.h>

int main()
{
int N,K;
scanf("%d", &N);
if(N>0)
{
    int x=1;
	for(K=2;N>K;K++)
{
	if(N%K==0)
{
    printf("NO");
    x=0;
	break;
}
}
	if(x==1)
{
	printf("YES");
}
}
else
{
    printf("error");
}
}
