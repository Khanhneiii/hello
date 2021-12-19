#include <stdio.h>
#include <math.h>

int find(int a[],int n)
{
    long long max=-10e9-1;
    for (int i=0;i<n;++i)
    if (a[i]>max) max=a[i];
    return max;
}
/*int snt(int prime[],int max){
    prime[max+1]={1};
    prime[0]=0;
    prime[1]=0;
    for (int i=2;i<=sqrt(max);++i){
        if (prime[i]=1){
            for (int j=i*i;j<=max;j+=i)
            prime[j] = 0;
        }
    }
    return 0;
}*/

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int max=find(a,n);
    int prime[max+1];
    for (int i=0;i<=max;++i)
    prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    for (int i=2;i<=sqrt(max);++i)
        if (prime[i]==1){
            for (int j=i*i;j<=max;j+=i)
            prime[j]=0;
        }
    for (int i=0;i<n;++i){
    if (prime[a[i]]) {
       // printf("%d ",a[i]);
        cnt++;
    }
    }
    printf("%d",cnt);
    return 0;
}
