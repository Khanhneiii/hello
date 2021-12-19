#include <stdio.h>
#include <math.h>
int b[100005]={0};
void check(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(b[a[i]])
		{
			printf("%d %d\n",a[i],b[a[i]]);
			b[a[i]]=0;
		}
	}
	
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	check(a,n);
	return 0;
}
