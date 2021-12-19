#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0,cnt=0,odd=0,even=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf ("%d",&a[i]);
        sum+=a[i];
    }
    sum/=n;
    for (int i=0;i<n;++i){
        if (a[i]%2==0) even++;
        else odd++;
    }
    if (even>odd) printf ("%d ",odd);
    else printf ("%d",even);
         return 0;
}