#include <stdio.h>

int solon(int a,int c,int d){
    int min = a;
    if (c<min) min=c; 
    if (d<min) min=d;
    return min;
}

int sobe(int a,int b){
    if (a>b) return b; else return a;
}

int main(){
    int a,b,c,d,lon,be;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    lon=solon(a,c,d);
    a-=lon;
    if (a==0) printf("%d",256*lon); 
    else printf("%d",256*lon+32*sobe(a,b));
    return 0;
}