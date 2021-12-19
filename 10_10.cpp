#include <stdio.h>
double s=0;

double sum(double n){
    if(n!=0){
        s+=1.00/n;
        sum(n-=1);
    }
    return s;
}

int main () {
    double n;
    scanf("%lf",&n);
    printf ("%.2lf",sum(n));
    return 0;
}