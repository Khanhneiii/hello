#include <stdio.h>

void select_sort(int a[],int n){
    int tmp,index,count=1;
    for (int i=0;i<n-1;++i){
        index=i;
        for (int j=i+1;j<n;++j){
            if (a[j]<a[index]) {
               index=j;
            }
        }
            tmp=a[i];
            a[i]=a[index];
            a[index]=tmp;
        if (count<=n-1) {
        printf ("Buoc %d: ",count);
        count++;
        for (int i=0;i<n;++i)
        printf ("%d ",a[i]);
        }
        else return ;
        printf("\n");
    }
}

int main() {
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    select_sort(a,n);
    return 0;
}