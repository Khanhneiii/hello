#include <stdio.h>
#include <math.h>

int chuso(int n) {
	int a,b;a=0;b=0;
	while (n!=0){
		a++;
		n/=10;
	}
	return a;
}

int armstrong(int n,int a){
	int b,m;b=0;m=n;
	while (n!=0){
		m=n%10;		
		b+=(int)pow(n%10,a);
		n/=10;	
	}
	return b;
}

int main () {
	int n,arm,tach;
	scanf ("%d",&n);
	tach=chuso(n);
//	printf("%d ",tach);
	arm=armstrong(n,tach);
//	printf ("%d ",arm)
	if (arm==n) printf("1"); else printf ("0");
    return 0;
}