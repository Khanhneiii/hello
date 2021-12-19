#include <stdio.h>

int main(){
    int n,sum=0,count=0;
    scanf ("%d",&n);
    int a[3];
    for (int i=1;i<=n;++i)
    {
        sum=0;
        for (int j=0;j<3;j++)
        {
            scanf ("%d",&a[j]);
            sum+=a[j];
        }
     //   printf ("%d\n",sum);
        if (sum>=2) count++;
    }
    
    printf ("%d",count);
    return 0;
}