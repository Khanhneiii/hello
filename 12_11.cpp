#include <stdio.h>

int check(int n){
    if (n<10)
    {
        if (n%2!=0) return 1;
        else return 0;
    }
    return check(n/10);   
}

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (check(a[i])) {
            b[count]=a[i];
            count++;
        }
    }
    for (int i=0;i<count;++i)
    printf("%d ",b[i]);
    return 0;
}