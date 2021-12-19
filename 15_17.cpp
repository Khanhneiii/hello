#include <stdio.h>
#include <stdlib.h>

int comp(const void* a,const void* b){
    int *x = (int*)a;
    int *y = (int*)b;
        return *y-*x;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),comp);
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    
}