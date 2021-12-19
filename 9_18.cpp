#include <stdio.h>

int tn(int n){
    int sum=0,m=n,s=0;
    while (n!=0) {
        sum=sum*10+n%10;
        s+=n%10;
        n/=10;
    }
    if (sum==m && s%10==8) return 1; 
    return 0;
}

int num(int n){
    while (n!=0){
        if (n%10==6) return 1;
        n/=10;
    }
    return 0;
}

int main() {
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;++i){
        if (num(i) && tn(i)) printf("%d ",i);
    }
    //printf ("%d ",count);
    return 0;
}