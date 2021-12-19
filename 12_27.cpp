#include <stdio.h>

void inter_sort(int a[],int n){
    int count=1,j;
    for (int i=0;i<n;++i){
        for (j=i+1;j<n;++j){
            if (a[j]<a[i]) {
               int tmp=a[j];
                a[j]=a[i];
                a[i]=tmp;
            }
        }
        if (i<n-1) {
        printf ("Buoc %d: ",count);
        count++;
        for (int i=0;i<n;++i)
        printf ("%d ",a[i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    inter_sort(a,n);
    return 0;
}