#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],str[30];
    int size1=0,size2=0;
    printf("1st string");
    scanf("%s",str1);
    size1 = strlen(str1);
    printf("2nd string");
    scanf("%s",str2);
    size2=strlen(str2);
    int j=0;
    for(int i = 0; i<size1;i++,j++)
    {
        str[j] = str1[i];
        // printf("%c\n",str1[i]);
    }
    for(int i=0;i<size2;i++,j++){
        str[j]=str2[i];
    }

    printf("%s",str);
    // printf("1st size %d second size %d",size1,size2);
    
    // for(int a=0,b=0;a<10;a++,b++){
    
    // printf("%d and %d\n",a,b);
    // }

    
        
        
    // }


    return 0;
}

    return 0;
}