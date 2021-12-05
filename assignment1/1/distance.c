#include<stdio.h>
#include<math.h>
int main(){
    ////// for 2dimensional co ordinates:
    int x1=0,x2=0,y1=0,y2=0,z1=0,z2=0,dimension=0;
    printf("dimension?(input 2/3)");
    scanf("%d",&dimension);
    if (dimension == 2){
        printf("input your x1 and y1:");
        scanf("%d%d",&x1,&y1);
        printf("input your x2 and y2:");
        scanf("%d%d",&x2,&y2);
        printf("your distance is %f\n", sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
    }
    
    /////// for 3dimensional co ordinates:
    else if(dimension == 3){
        printf("input your x1 and y1:");
        scanf("%d%d%d",&x1,&y1,&z1);
        printf("input your x2 and y2:");
        scanf("%d%d%d",&x2,&y2,&z2);
        printf("your distance is %f\n", sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2)));
    }

    else
    printf("unsupported dimension value");



return 0;

}