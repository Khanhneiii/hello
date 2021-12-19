#include <stdio.h>

int main() {
    int n,a[105],b[100000]={0};
        scanf("%d",&n);
        for (int j=0;j<n;++j){
            scanf("%d",&a[j]);
            b[a[j]]++;
        }
        for (int j=0;j<n;++j){
        if (b[a[j]]!=0) {
            printf("%d xuat hien %d lan\n",a[j],b[a[j]]);
            b[a[j]]=0;
        }
        }
    return 0;
}