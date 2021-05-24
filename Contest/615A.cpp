#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    long long int a,b,c,n;
    long long int A=0,B=0,C=0;
    int ans=0;
    while(t--){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
        long long int i, j, k;
        for(i=0;i<=n;i++){
            A=i;
            for(j=0;j<=n-i;j++){
                B=j;
                for(k=0;k<=n-i-j;k++){
                    C=k;
                    if(A+B+C==n){
                        if(A+a==B+b && B+b==C+c){
                            ans=1;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(ans==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
