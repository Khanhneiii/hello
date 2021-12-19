#include <stdio.h>

int tn(int n)
{
	int i,a,b,c;a=n;b=0;
	while (n!=0){
		b=b*10+n%10;
		n/=10;
	}
	if (b==a) return 1;
	return 0;
}

	int chuso(int n) {
		while (n!=0){
			if (n%10==9) return 0;
			n/=10;
		}
		return 1;
	}
	
	int main() {
		int n;
		scanf("%d",&n);
		for (int i=2;i<=n;++i) {
		if (tn(i) && chuso(i)) printf("%d ",i);
	}
	return 0;
	}
