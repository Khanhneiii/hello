#include <stdio.h>

int main(){
    int n,index,cnt=0;
    scanf("%d",&n);
    int a[n];
    long long min=10e9+1;
    for(int i=0;i<n;++i){
    scanf("%d",&a[i]);
    if (a[i]<min && a[i]>0) {
        min=a[i];
        index = i;
        cnt++;
    }
    }
    if (cnt) printf("%d ",index+1);
    else printf("-1");
    return 0;
}