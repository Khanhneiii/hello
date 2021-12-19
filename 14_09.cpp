    #include <stdio.h>
    #include <math.h>
    #define ll long long 


    int main() {
        int n,index,index2;
        scanf ("%d",&n);
        int a[n];
        for (int i=0;i<n;++i)
        scanf ("%d",&a[i]);
        long long min=1e9+1;
        for (int i=0;i<n;++i){
            for (int j=i+1;j<n;++j)
                if (abs(a[i] - a[j]) < min) {
                    min = 1ll*abs(a[i] - a[j]);
                    index = i;
                    index2 = j;
                }
        }
        if (a[index] > a[index2]){
           int tmp =  index;
            index = index2;
            index2 =tmp;
        }
        printf("%lld %d %d",min,a[index],a[index2]);
        return 0;
    }