#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
        cnt+=a[i];
    }
    if (cnt==0) printf("EASY");
    else printf("HARD");
    return 0;
}