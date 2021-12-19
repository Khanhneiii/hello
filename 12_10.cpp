#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    int b[n];
    for (int i=0;i<n;++i)
    b[i]=0;
    int cnt=0;
  /*  if (a[0]*a[1]<0) {
        b[cnt]=a[0];
        cnt++;
    }*/
    for (int i=0;i<n;i++)
    if (a[i]*a[i+1]<0 || a[i]*a[i-1]<0) {
       printf("%d ",a[i]);
    }
   /*if (a[n-1]*a[n-2]<0) b[cnt]=a[n-1];
    for (int i=0;i<cnt;++i)
    printf("%d ",b[i]);*/
    return 0;
}