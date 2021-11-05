#include <stdio.h>
#include <math.h>

int main()
{
    int d,w,y,a;
    scanf("%d",&a);
    if (a % 365 == 0) {printf ("%d 0 0" ,a/365  );} else {  y=a/365;a=a-365*y; if (a%7==0) { w= a/7; printf ("%d %d 0",y,w);}
	else {w= (double)a/7; a=a-w*7; printf("%d %d %d ",y,w,a);
	}
} }
