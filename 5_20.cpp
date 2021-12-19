#include <stdio.h>
#include <math.h>

int giai(int n) {
    int i,a=1;
    for (i=1;i<=n;++i) a*=i;
return a;};

int main()
{
    int n,k=0,a=0,b=0,c,d,i;
    scanf("%d",&n);
 	if (n==1) {printf("1 ");return 1;}
    printf("1 \n");
    for (i=1;i<n;++i)
    {
        for (a=0;a<=i;++a){
            b=giai(i);
            k=giai(a);
            c=giai(i-a);
            printf("%d ",b/(k*c));
            
        }
        printf("\n");
  
}
return 0;
}
