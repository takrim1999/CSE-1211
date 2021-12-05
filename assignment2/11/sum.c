#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("input number\n>");
scanf("%d",&n);
if(n>0){
    printf("sum is %d",(n*(n+1))/2);
}
else if(n<0){
    n = abs(n);
    printf("sum is %d",1-((n*(n+1))/2));
}

return 0;
}