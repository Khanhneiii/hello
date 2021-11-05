#include <stdio.h>
#include <math.h>

int nguyento(int i) {
	if (i<2 ) return 0;
	int a;
	for (a=2;a<=sqrt(i);++a)
	if (i%a==0) return 0;
	return 1;
}
int fibo(int i) {
	int c,d,e,f,g,h;c=0;
	while (i!=0) {
		c+=i%10; i/=10;
	};e=0;f=1;
	for (d=2;d<=10;++d){
		g=e+f;
		e=f;
		f=g;
		if (g==c) return 1;
	};
	return 0;
}

int main (){
	int a,b,i;
	scanf ("%d%d",&a,&b);
	for (i=a;i<=b;i++)
	if (nguyento(i) && fibo(i)) printf ("%d ",i);
	return 0;
}
