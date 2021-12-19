#include <stdio.h>

void tong(int a[],int n,int x,int y){
    int sum=0;
    for (int i=x;i<=y;++i)
    sum+=a[i];
    printf ("%d\n",sum);
}


int main() {
    int n,t;
    scanf("%d%d",&n,&t);
    int a[n];
    for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
    long long sum[100001];
    sum[0]=a[0];
    for (int i=1;i<n;++i)
    sum[i] = sum[i-1] + a[i];
    int x,y;
    for (int i=0;i<t;++i)
    {
        scanf ("%d%d",&x,&y);
        printf ("%d",sum[y] - sum[x-1]);
    }
    return 0;
}