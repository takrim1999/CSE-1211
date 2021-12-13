#include<stdio.h>
#include<math.h>
int main(){
    int n,temp=0;
    printf("input value of n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        // printf("%d",i);
        temp = temp + pow(i,2);
    }
    printf("%d",temp);



    return 0;
}