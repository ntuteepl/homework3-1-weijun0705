#include <stdio.h>

int main(){
int a1,a2,b1,b2,m1,m2,t1,t2,t3,t4,A,B;
scanf("%d", &a1);
    while(a1<0000||a1>9999){
    scanf("%d", &a1);
}
    for(int x=0;x<2;x++){
        x = 0;
        scanf("%d", &a2);
    if(a2==0){
        break;
}
        b1=a1;
        b2=a2;
        A=0;
        B=0;
    for(int i=0;i<4;i++){
        m1=b1%10;
        m2=b2%10;
    if (m1==m2){
        A++;
}
    else
{
        t1 = a1;
        t2 = b2;
    for (int j=0;j<4;j++){
        t3=t1%10;
        t4=t2%10;
    if (t3==m2){
        B++;
}
        t1/=10;
        t2/=10;
}
}
        b1/=10;
        b2/=10;
}

printf("%dA%dB\n", A, B);
}
}

