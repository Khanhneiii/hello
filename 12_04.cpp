#include <stdio.h>

int main() {
    int n,count = 0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    long long max=-10e9-1,max2=max;
    if (a[n-1] == a[n-2]) count ++;
    for (int i=0;i<n;++i){
        if (i<n-1 && a[i]==a[i+1]) count ++;
        if (a[i]>max){
            max2=max;
            max = a[i];
        }
        else if (a[i]>max2 && a[i] != max) {
            max2=a[i];
    }
    }
  //  printf ("%d \n",count);
    if (count==n) printf ("%d -1",max);
    else printf ("%d %d",max,max2);
    return 0;
}
