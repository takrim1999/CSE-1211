#include<stdio.h>
float power(float x, int n);
int main(){
    float x;
    int n;
    printf("the number you want to calculate to the power\n>");
    scanf("%f",&x);
    printf("power?\n>");
    scanf("%d",&n);
    printf("%.2f to the power %d is %.2f",x,n,power(x,n));
    return 0;
}

float power(float x, int n){
    float y = 1;
    for(int i = n/2;i>0;i--){
        y = y*(x*x);
    }
    if(n%2==1){
        y = y*x;
    }
    return y;
}