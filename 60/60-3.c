// 2018/3/9 ITSA 60-3

#include<stdio.h>

int main(){
    int s=0;
    scanf("%d",&s);

    while(s--){
        int n=0,m=0,power[1001]={0};
        scanf("%d %d",&n,&m);

        for(int i=1;i<=n;i++)
            scanf("%d",&power[i]);


        int start=0,end=0;
        long sum=0;
        for(int i=0;i<m;i++){
            scanf("%d %d",&start,&end);
            for(int j=start;j<=end;j++)
                sum+=power[j];
            printf("%ld\n",sum);
            sum=0;

        }
    }

    return 0;
}
