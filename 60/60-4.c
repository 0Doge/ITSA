// 2018/3/9 ITSA 60-4

#include<stdio.h>
int gcd(int a,int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    int s=0;
    scanf("%d",&s);

    while(s--){
        int au=0,ad=0,bu=0,bd=0,d=0,u=0; //a���l,a����,b���l,b����,�X�����l,�A������
        char f; //�榡�ƿ�J�����Ÿ���
        scanf("%d%c%d%c%d%c%d",&au,&f,&ad,&f,&bu,&f,&bd);
        d=ad*bd;
        u=au*bd+bu*ad;

        printf("%d/%d\n",u/gcd(u,d),d/gcd(u,d));
    }
    return 0;
}
