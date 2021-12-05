#include<stdio.h>
#include<string.h>
int main(){
    float cel,far;
    int choice;
    printf("1.Celsius or 2.Fahrenheit?(input digits)\n>");
    scanf("%d",&choice);
    // printf("your choice is %s", choice);    
    // !strcmp(choice,"celsius")
    if (choice == 1){
        printf("input your temperature in celsius: ");
        scanf("%f",&cel);
        far = (9*cel)/5 + 32;
        printf("your temperature is %.2f F",far);
    }
    else if(choice == 2){
        printf("input your temperature in fahrenheit: ");
        scanf("%f",&far);
        cel = (5*(far - 32))/9;
        printf("your temperature is %.2f C",cel);
    }


    return 0;
}
