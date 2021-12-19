#include <stdio.h>

int main(){
    int n,tmp=-2;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (a[i]%2==0) tmp=i;
    }
    printf("%d",tmp+1);
    return 0;
}