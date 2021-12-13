#include<stdio.h>
int main(){
    int a,b,c;
    printf("input value of A: ");
    scanf("%d",&a);
    printf("input value of B: ");
    scanf("%d",&b);
    printf("before swap A=%d and B=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swap A=%d and B=%d\n",a,b);

return 0;    
}
