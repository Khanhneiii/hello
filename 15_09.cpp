#include<stdio.h>

int main() {
	int n,i,j,count=0;
	int a[100],cnt[100000];
	int dem;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
        if (cnt[a[i]] == 1) count++;
        cnt[a[i]]++;
	}
    printf("%d \n",count);
    for (i=0;i<n;++i)
        if (cnt[a[i]] > 1)
            {
                printf ("%d ",a[i]);
                cnt[a[i]] = 0;
            }
    return 0;
}