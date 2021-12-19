#include <stdio.h>


int max( int a,int b){
    if (a>b) return a; else return b;
}

int main(){
    int a,b,x,y;
    float rate;
    scanf("%d%d",&a,&b);
    x=max(a,b);
    rate=(float)(7-x)/6;
    if (rate==0) printf("0/1");
    else printf("1/%.0lf",1.00/rate);
    return 0;
    
}