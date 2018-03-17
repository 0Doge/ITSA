// 2018/3/9 ITSA 60-1

#include<stdio.h>

int main(){
    int n=0,year=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&year);
        if(year%400==0)
            printf("Bissextile Year\n");
        else if(year%100==0)
            printf("Common Year\n");
        else if(year%4==0)
            printf("Bissextile Year\n");
        else
            printf("Common Year\n");
    }
    return 0;
}
