#include <stdio.h>

int gt(int n){
    int sum=1;
    for (int i=2;i<=n;++i){
        sum*=i;
    }
    return sum;
}

int strong(int n){
    int s=0,m=n;
    while (n!=0){
        s+=gt(n%10);
        n/=10;
    }
    if (s==m) return 1;
    return 0;
}

int main(){
    int a,b,count=0;
    scanf ("%d%d",&a,&b);
    for (int i=a;i<=b;++i){
        // printf("gt=%d ",gt(i));
        if (strong(i)) {
            count=1;
            printf("%d ",i);
        }
    }
        if (count==0) printf ("0");
        return 0;
}