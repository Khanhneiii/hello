#include <stdio.h>


int check(int a[],int n){
    if (a[0]>25) return 0;
    int m25=0,m50=0,m100=0;
    for (int i=0;i<n;++i)
    {
        if (a[i]==25){
            m25++;
        }
        else if (a[i]==50){
            if (m25==0) return 0;
            m50++;
            m25--;
        }
        else if (a[i]==100){
           if(m25 == 0 || m25*25 + m50*50 <75) return 0;
        if (m50!=0){
            m50--;m25--;
        }
            else m25-=3;
        }
    }
    return 1;
} 

int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    {
        scanf ("%d",&a[i]);
    }
    if (check(a,n)) printf ("YES"); else printf ("NO");
    return 0;
}