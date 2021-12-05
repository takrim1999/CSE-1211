#include<stdio.h>
int main(){
    int n,mark,not=0;
    float det;
    printf("input number of exams\n>");
    scanf("%d",&n);
    for(int i;i<n;i++){
        printf("mark: ");
        scanf("%d",&mark);
        if (mark<=3){
            not = 1;
        }
        det = det + mark;
    }
    det = det/n;
    // printf("%.2f",det);
    if (det>=5){
        printf("NAMED");
    }
    else if (det>=4.5 && det<5 && not == 0){
        printf("HIGH");
    }
    else if (det>3 && det<4.5 && not == 0){
        printf("COMMON");
    }
    else 
        printf("NONE");


    return 0;
}