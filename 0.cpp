#include <stdio.h>

int main() {
	int a[3][4],b[1000],cnt = 0;
	for (int i=0;i<3;++i)
		for (int j=0;j<4;++j)
		scanf("%d",&a[i][j]);
	long long min = 1e9-1;
	for (int i=0;i<3;++i){
		for (int j=0;j<4;++j)
		{
			if (a[i][j] < min) {
				min=a[i][j];
		}
		}
	}
	for (int i=0;i<3;++i)
		for (int j=0;j<4;++j)
		if (a[i][j]==min) printf ("%d %d\n",i+1,j+1);
	return 0;
}