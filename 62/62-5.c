// 2018/3/17 ITSA 62-5

#include<stdio.h>

int MaxObstacles(int obstacles[50][2]); //最大陷阱長度
int FallObstacles(int obstacles[50][2],int fpoint); //是否跌入陷阱
int MinJump(int obstacles[50][2],int end); //最短跳躍距離

int main(){
    int t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x=0,n=0,obstacles[50][2]={0};
        scanf("%d",&x);
        scanf("%d",&n);

        for(int j=0;j<n;j++)
            scanf("%d %d",&obstacles[j][0],&obstacles[j][1]);

        printf("%d\n",MinJump(obstacles,x));
    }
    return 0;
}

int MaxObstacles(int obstacles[50][2]){
    int max=0;
    for(int i=0;obstacles[i][1]!=0;i++) //obstacles[i][1] 為陷阱後端 為0表示陣列並沒有存資料 已無陷阱
        if((obstacles[i][1]-obstacles[i][0])>max)
            max=obstacles[i][1]-obstacles[i][0];
    return max;
}

int FallObstacles(int obstacles[50][2],int fpoint){
    for(int i=0;obstacles[i][1]!=0;i++)
        if(obstacles[i][0]<fpoint&&obstacles[i][1]>fpoint)
            return 1;
    return 0;
}

int MinJump(int obstacles[50][2],int end){
    for(int j=MaxObstacles(obstacles);j<=end;j++){
        int fpoint=0;
        while(fpoint+=j){
            if(fpoint>=end)
                return j;
            if(FallObstacles(obstacles,fpoint))
                break;
        }
    }
}
