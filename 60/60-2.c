// 2018/3/9 ITSA 60-2

#include<stdio.h>
#include<string.h>
int main(){
    int n=0;
    char str[55]={0};
    scanf("%d ",&n);

    while(n--){
        fgets(str,51,stdin);
        for(int i=strlen(str)-2;i>=0;i--) //-2 �@�ӬOfgets���i���_��Ÿ� �@�ӬO�r��}�C�q0�}�l
            printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}
