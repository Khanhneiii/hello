#include <stdio.h>

int sum(int a,int b,int c,int n){
    int count;
    int sum=a+b+c;
    if (sum<n && sum>0) return 1;
    if (sum%n==0) return sum/n;
    else return sum/n+1;


}

int main(){
    int a,b,c,x,y,z,n,count1,count2;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&x,&y,&z);
    scanf ("%d",&n);
    count1=sum(a,b,c,5);
    count2=sum(x,y,z,10);
    if (count1+count2-n>0) printf("NO"); else printf("YES");
    
    return 0;
}