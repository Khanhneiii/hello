#include <stdio.h>
#include <math.h>
int main (){
	int n,a,b,c,i,d,e,f,x,y;
	b=0;c=0;a=0;e=0;f=0;
	scanf("%d%d",&x,&y);
	for (i=x;i<=y;i++)  {f=0;
		a=i;b=0;
		while (a!=0){
			d=a%10,a/=10;b=b*10+d;e+=d;
			if (d==6) f++;
		
			};
			if (i-b==0 && e%10==8 && f>=1) {printf("%d ",i);};
	
			d=0;b=0;e=0;
		};
	//	printf ("%d ",n);
	return 0;
}
