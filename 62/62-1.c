// 2018/3/17 ITSA 62-1

#include<stdio.h>

int judgment(int game[3][3]);

int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int game[3][3]={0};
        for(int j=0;j<3;j++)
            scanf("%d %d %d",&game[j][0],&game[j][1],&game[j][2]);
    if(judgment(game))
        printf("True\n");
    else
        printf("False\n");
    }

    return 0;
}

int judgment(int game[3][3]){
    if(game[0][0]==game[0][1]&&game[0][1]==game[0][2]){}
    else if(game[1][0]==game[1][1]&&game[1][1]==game[1][2]){}
    else if(game[2][0]==game[2][1]&&game[2][1]==game[2][2]){}
    else if(game[0][0]==game[1][0]&&game[1][0]==game[2][0]){}
    else if(game[0][1]==game[1][1]&&game[1][1]==game[2][1]){}
    else if(game[0][2]==game[1][2]&&game[1][2]==game[2][2]){}
    else if(game[0][0]==game[2][2]&&game[2][2]==game[2][2]){}
    else if(game[0][2]==game[2][2]&&game[2][2]==game[2][0]){}
    else
        return 0;
    return 1;
}
