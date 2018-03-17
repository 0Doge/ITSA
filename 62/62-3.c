// 2018/3/17 ITSA 62-3

#include<stdio.h>

int main(){
    int n=0;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        char numa[5]={0},numb[5]={0};
        int a=0,b=0;
        scanf("%s",numa);
        scanf("%s",numb);

        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                if(numa[j]==numb[k]&&j==k)  //數字相同 同位置
                    a++;
                else if(numa[j]==numb[k]) //數字相同 不同位置
                    b++;
            }
        }
        printf("%da%db\n",a,b);
    }

    return 0;
}

