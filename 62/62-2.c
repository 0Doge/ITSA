// 2018/3/17 ITSA 62-2

#include<stdio.h>
#include<string.h>

int max(int ascii[256]);

int main(){
    int n=0;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        char str[1000]={0};
        int ascii[256]={0};
        fgets(str,1000,stdin);
        for(int j=0;j<strlen(str)-1;j++)
            ascii[(int)str[j]] ++;
        printf("%c\n",max(ascii));
    }

    return 0;
}

int max(int ascii[256]){
    int max=0,icpy=0; //字元出現最高次數  哪個字元(ascii)
    for(int i=0;i<256;i++){
        if(ascii[i]>max){
            max=ascii[i];
            icpy=i;
        }
    }
    return icpy;
}
