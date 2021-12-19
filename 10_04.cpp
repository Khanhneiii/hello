#include <stdio.h>
int count=0;
int num(int n) {
    
   if (n<10) return count+=1;
   else {
       count++;
        return num(n/10);
   }
}

int main() {
    int n;
    scanf("%d",&n);
    printf ("%d",num(n));
    return 0;   
}