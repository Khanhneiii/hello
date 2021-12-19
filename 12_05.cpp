#include <stdio.h>

int check(int n){
    int tmp1=0,tmp2=0;
    while (n!=0)
    {
        if (n%10==9) {
            tmp1=9;
        }
        else if (n%10==1) tmp2=1;
        n/=10;
        if (tmp1==9 && tmp2==1) return 1;
    }
    return 0;
}

int main() {
    int n,count=0;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (check(a[i])) count++;
    }
    printf("%d ",count);
    return 0;
}