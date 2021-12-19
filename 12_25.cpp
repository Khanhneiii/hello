#include <stdio.h>

void sort(int a[],int n){
    for (int i=0;i<n;++i){
        int maxi=i;
        for (int j=i+1;j<n;++j){
            if (a[j]<a[maxi]){
                maxi=j;
            }
        }
        int tmp=a[maxi];
        a[maxi]=a[i];
        a[i]=tmp;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    sort(a,n);
    for (int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
    return 0;
}
