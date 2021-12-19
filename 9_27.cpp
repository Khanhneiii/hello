    #include <stdio.h>
    #include <math.h>

    long long inv(long long n){
        long long s=0;
        while (n!=0){
            s=s*10+n%10;
            n/=10;
        }
        return s;
    }

    int main() {
        long long n;
        int r=0;
        scanf("%lld",&n);
        long long m=inv(n),t=inv(n);
        int k[10]={0};
        while (t!=0) {
            if (t%10==2) k[2]++;
            else if (t%10==3) k[3]++;
            else if (t%10==5) k[5]++;
            else if (t%10==7) k[7]++;
            t/=10;
        }
        int c[4];
        int i=0,count=0;
        c[0]=0;
        while (m!=0){
            count=0;
            r=m%10;
            if ( r==2 || r==3 || r==5 || r==7 ){
                for (int j=0;j<=i;++j){
                if (r==c[j]) count++;
                }
                if (count==0) {
                    c[i]=r;
                    ++i;
            }
            }
            if (i>4) break;
            m/=10;
            }
        for (int j=0;j<i;++j)
        printf ("%d %d\n",c[j],k[c[j]]);
        
    return 0;
    }
