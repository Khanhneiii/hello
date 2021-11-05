#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    double delta,x1,x2;
    scanf ("%lf%lf%lf",&a,&b,&c);
    delta=b*b-a*4*c;
    if (a==0) {printf ("%.2lf",-c/b);} else {
    if (delta>=0)
 {x1=(-b+sqrt(delta))/(2*a);x2=(-b-sqrt(delta))/(2*a); printf("%.2lf %.2lf",x1,x2);}
 else {if (delta<0) {printf("NO");} else {printf("INF");
 };};};
 return 0;
}
 
