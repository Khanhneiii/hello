#include <stdio.h>

void change(int b[],int k,int x){
    for (int i=0;i<k-1;++i){
        b[i] = b[i+1];
    }
    b[k-1] = x;
}

int main() {
    int n,index,k,count = 0;
    scanf ("%d%d",&n,&k);
    int a[n],b[k];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    long long max=-1e18, tmp =0;
    for (int i=0;i<n;++i){
        tmp += a[i];
        b[count]=a[i];
        if (count <= 2) count++;
        if (i>k-1) {
            tmp -=a[i-k];
       //     printf("%d ",a[i]);
        }
        if (tmp >= max) {
            max = tmp;
           index = i-k+1;
        }
    }
    printf ("%lld\n",max);
    for (int i=index;i<index + k;++i)
    printf ("%d ",a[i]);
    return 0;
}