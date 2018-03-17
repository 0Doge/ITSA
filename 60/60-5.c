// 2018/3/9 ITSA 60-5

#include<stdio.h>
typedef struct {
    int start,end;
} stations;


int main(){
    int s=0;
    scanf("%d",&s);

    while(s--){
        int n,m,min=0;
        stations trains[1000];
        scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++)
            scanf("%d",&trains[i].start);
        for(int i=0;i<m;i++)
            scanf("%d",&trains[i].end);

        int running=0,now=0,terminal=0;  //�{�b��ܪ����� ,�W�@�Z���������I��,�U�@�Z���������I��

        while(terminal<n-1){
            int find=0; //�O�_�i���U�Z���򪺤���
            for(int i=0;i<m;i++){
                if(trains[i].start<=now&&trains[i].end>terminal){
                    running=i;
                    terminal=trains[i].end;
                    find=1;
                }
            }

            if(find==0){
                    min=-1;
                    break;
            }
            min+=1;
            now=trains[running].end;
        }
        printf("%d\n",min);
    }
    return 0;
}
