#include <stdio.h>
#include <string.h>


int main()
{
    int n;
    scanf("%d",&n);
    char str[n+1];
    int i,j,x=0,y=0,count=0;
    scanf("%s",&str[i]);
    for(i=0;i<n;i++){


        /*if(str[i]=='L'){
            x-=1;
        }
        else{
            y+=1;
        }
        for(j=x;j<=y;j++){
            count++;
            printf("\n%d\n",count);
        }*/
    }
    /*for(i=1;i<=n;i++){
        putchar(str[i]);
        //printf("%c ",str[i]);
    }
    printf("\n\n%d\n",count);*/
    for(i=0;i<n;i++){
        printf("%s ",&str[i]);
    }




    return 0;
}
