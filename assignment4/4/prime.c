#include<stdio.h>
int prime(int start, int end);
int main(){
    int start=0,end=0;
    printf("input starting point\n>");
    scanf("%d",&start);
    printf("input ending point\n>");
    scanf("%d",&end);
    prime(start,end);
    return 0;
}

int prime(int s, int e){
    int plist[e-s+1];
    for(int i = 0; i<=(e-s+1); i++){
        plist[i] = s;
        s++;
    }
    for(int i = 0; i<(e-s); i++){
        printf("%d\n",plist[i]);
    }
    return 0;
}