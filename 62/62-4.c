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

int win(int heap[100]){ //�N�U��������ন�G�i��� �M��ۥ[ �����i�� �A�ݩM���U�Ӧ�� �p�G�M���U�Ӧ�Ƴ��O���� �����  (SG �իٹC��)
    int xor=0;
    for(int i=0;i<100;i++)
        xor^=heap[i];
    if(xor)
        return 1;
    return 0;
}
