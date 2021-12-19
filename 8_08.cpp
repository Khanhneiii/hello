#include <stdio.h>

int main() {
    int h,m,day,time,n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
    scanf ("%d%d",&h,&m);
    day=24*60;
    h=h*60+m;
    time=day-h;
   printf("%d\n",time);}
   return 0;
}