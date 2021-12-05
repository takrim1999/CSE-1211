#include<stdio.h>
int main(){
    int number,a=0,b=0,c=0;
    printf("how many numbers?(2/3)\n>");
    scanf("%d",&number);
    if (number == 2){
        printf("input first number: ");
        scanf("%d",&a);
        printf("input second number: ");
        scanf("%d",&b);
        
        if (a>b){
            printf("%d is the maximum\nand %d is the minimum",a,b);
        }
        else if(b>a)
            printf("%d is the maximum\nand %d is the minimum",b,a);
        else
            printf("they are equal");
    }
    else if(number == 3){
        printf("input first number: ");
        scanf("%d",&a);
        printf("input second number: ");
        scanf("%d",&b);
        printf("input third number: ");
        scanf("%d",&c);
        
        if (a>b && a>c && b>c){
            printf("%d is the maximum\nand %d is the minimum",a,c);

        }
        else if (a>b && a>c && c>b){
            printf("%d is the maximum\nand %d is the minimum",a,b);
        }
        else if (b>a && b>c && a>c){
            printf("%d is the maximum\nand %d is the minimum",b,c);
        }
        else if (b>a && b>c && c>a){
            printf("%d is the maximum\nand %d is the minimum",b,a);
        }
        else if (c>a && c>b && a>b){
            printf("%d is the maximum\nand %d is the minimum",c,b);
        }
        else if (c>a && c>b && b>a){
            printf("%d is the maximum\nand %d is the minimum",c,a);
        }
        else
            printf("some of them are equal");
        }





    else
        printf("not available");
    return 0;
}