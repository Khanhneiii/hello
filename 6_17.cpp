#include <stdio.h>

int main() 
{
    int a,b,j,n,i;
    scanf("%d%d",&a,&b);
    for (i=0;i<a;++i)
    {
        for (j=1;j<=b;++j)
        {
            if (j<=i) printf("~"); else printf("*");
        }
        printf ("\n");
        ++b;
    }
    return 0;
}