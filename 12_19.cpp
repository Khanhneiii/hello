#include <stdio.h>

void check(int a[],int n){
    int count=0,tmp=0;
    long long max=-1e9-1;
    for (int i=0;i<n;++i){
        if (a[i]>max) {
            count++;
            max=a[i];
        }
    }
    printf ("%d",count);
}

int main(){
    int t,n,a[100000];
  //  scanf("%d",&t);
   // for (int i=1;i<=t;++i){
        scanf("%d",&n);
        for (int j=0;j<n;++j)
        scanf("%d",&a[j]);
        check(a,n);
    return 0;

}