#include <stdio.h>

int main(){
    int c1,c2,c3,c4,c5,s;
    scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
    s=c1+c2+c3+c4+c5;
    if (s%5==0) 
        if (s!=0 && s%5==0) 
        printf("%d",s/5);
        else printf("-1");
    return 0;
}
