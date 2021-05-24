#include <stdio.h>

int t;
long long int n,k;

void readcase()
{
    scanf("%d %d",&n,&k);
}

int Min(int i,int j)
{
    return i<j?i:j;
}

void solvecase()
{
    int a,b;
    if(n%k==0){
        printf("%d\n",n);
    }
    else{
        a=n/k*k;
        b=n%k;
        b=Min(b,k/2);
        printf("%d\n",a+b);
    }

}


int main()
{
    scanf("%d",&t);

    while(t--){
        readcase();
        solvecase();
        //printcase();
    }

    return 0;
}
