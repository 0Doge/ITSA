// 2018/3/17 ITSA 62-4

#include<stdio.h>

int win(int heap[100]);

int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m=0,heap[100]={0};
        scanf("%d",&m);
        for(int j=0;j<m;j++)
            scanf("%d",&heap[j]);
        if(win(heap))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

int win(int heap[100]){ //將各堆錢幣的轉成二進位數 然後相加 但不進位 再看和的各個位數 如果和的各個位數都是偶數 先手勝  (SG 博弈遊戲)
    int xor=0;
    for(int i=0;i<100;i++)
        xor^=heap[i];
    if(xor)
        return 1;
    return 0;
}
