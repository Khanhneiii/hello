#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    long long n;
    int k1=0,k2=0,k3=0,k4=0,r=0,tmp=0,k=0;
    scanf("%lld",&n);
    while (n!=0) {
        if (n%10==2) k1++;
        else if (n%10==3) k2++;
        else if (n%10==5) k3++;
        else if (n%10==7) k4++;
        n/=10;
    }
    printf ("%d \n",tmp);
    if (k1!=0) printf ("2 %d\n",k1);
    if (k2!=0) printf ("3 %d\n",k2);
    if (k3!=0) printf ("5 %d\n",k3);
    if (k4!=0) printf ("7 %d\n",k4);
    return 0; 
}