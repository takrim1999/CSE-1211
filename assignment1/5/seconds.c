#include<stdio.h>
int main(){
    int n=0,seconds=0,mins=0,hours=0; 
printf("your number?\n>");
scanf("%d",&n);
if (n>=3600){
    hours = n/3600;
    seconds = n%3600;
    mins = seconds/60;
    seconds = seconds%60;
    
        
    // mins = n/60;
    
        // }
        // else
        //     seconds = n;
}   
else{ 
    if (n>=60){
        mins = n/60;
        seconds = n%60;
    }
    else
        seconds = n;
    }

if(hours>0){
        printf("%d hours " , hours);
        printf("%d mins ",mins);
        printf("%d seconds",seconds);

}
else {
    if(mins>0){
        // printf("%d hours " , hours);
        printf("%d mins ",mins);
        printf("%d seconds",seconds);
    }
    else{
        // printf("%d hours " , hours);
        // printf("%d mins ",mins);
        printf("%d seconds",seconds);
    }
}
return 0;
}