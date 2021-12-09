#include<stdio.h>
#include<string.h>
int main(){
    char str[20],ch;
    int c = 0;
    printf("your string\n>");
    scanf("%s",str);
    // printf("%s",str);
    printf("your character\n>");
    scanf(" %c",&ch);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            c++;
        }
    }

printf("frequency of %c is %d\n",ch,c);
    return 0;
}