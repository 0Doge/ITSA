#include<stdio.h>
#include<string.h>
int value(int a[],int i);//|�l�`�I-���`�I|
int cti(char in[]); //�r������
void p(int in[]);  //��X

int main (){
    int m=0,c=0;
    char tree[101]={0};
    const char *cut="(),";

    scanf("%d ",&m);
    for(int k=0;k<m;k++){
        int j=1,wtree[20]={0},a=0,ans[20]={0}; //cut�p�ƾ� �`�I�v�� ans�p�ƾ� �ŦX���`�I
        scanf("%d ",&c);
//=============================================
        fgets(tree,101,stdin);
        char *ptr= strtok(tree,cut);

        while(ptr){
            j++;
            wtree[j/2]=cti(ptr);
            ptr = strtok(NULL,cut);
        }
//===============================================
        for(int i=2;i<=j/2;i++){
           if(value(wtree,i)<=c)
                ans[a++]=i;
        }
        p(ans);
    }
    return 0;
}

int value(int a[],int i){
    if(a[i]-a[i/2]>0)
        return a[i]-a[i/2];
    return -(a[i]-a[i/2]);

}
int cti(char in[]){
    int sum=0;
    for(int i=0;i<strlen(in);i++){
        sum*=10;
        sum+=in[i]-48;
    }
    return sum;
}

void p(int in[]){
    int i=0;
    while(in[i]!=0){
        printf("%c%c",in[i]/2+64,in[i]+64);
        if(in[i+1]!=0)
            printf(" ");
    i++;
    }
    printf("\n");
}
