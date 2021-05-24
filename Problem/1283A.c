#include <stdio.h>


int main()
{
    int t,h,m;
    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&h,&m);
        if(h==0 && m== 0){
            printf("0\n");
        }
        else{
            h=23-h;
            m=60-m;
            m=h*60+m;
            printf("%d\n",m);
        }
    }

    return 0;
}
