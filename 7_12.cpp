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
    
    printf("~~~~2 \n");d=i;
    for (i=1;i<n;++i)
    {
        for (a=0;a<=d;++a){
            b=giai(i);
            k=giai(a);
            c=giai(i-a);
            if (a<n-(i+1)) printf ("~"); else printf("%d",2*b/(k*c));
            
        }
        printf("\n");++d;
  
}
return 0;
}