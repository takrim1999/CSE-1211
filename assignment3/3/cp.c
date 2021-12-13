#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str[30];
    int size1=0;
    printf("1st string\n>");
    scanf("%s",str1);
    size1 = strlen(str1);
    for(int i = 0; i<size1;i++)
    {
        str[i] = str1[i];
        // printf("%c\n",str1[i]);
    }
    printf("%s",str);

    
        

    return 0;
}