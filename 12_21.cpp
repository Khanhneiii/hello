#include <stdio.h>
#include <math.h>

int ngt(int n){
    if (n<=1) return 0;
    for (int i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;
    return 1;
}
long long find(int a[],int n){
    long long max=-1e9-1;
    for (int i=0;i<n;++i)
    if (a[i]>max) max=a[i];
    return max;
}

int main() {
    int t,n,a[105],b[105]={0};
        scanf("%d",&n);
        for (int j=0;j<n;++j){
            scanf("%d",&a[j]);
            if (ngt(a[j])) b[a[j]]++;
        }
        long long max=find(a,n);
        for (int i=0;i<max;++i){
            if(b[i]!=0) printf("%d xuat hien %d lan\n",i,b[i]);
        }
    return 0;
}