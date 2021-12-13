#include<stdio.h>
int circle();
int square();
int triangle();
int rectangle();
int main(){
    char shape[10];
    printf("which shape you want to calculate?(square/rectangle/triangle/circle\n)>");
    scanf("%s",shape);
    // printf("%s",shape);
    if (shape == "circle"){
        printf("done");
        circle();
    }
    else if(shape == "square"){
        square();
    }
    else if(shape == "triangle"){
        triangle();
    }
    else if (shape == "rectangle"){
        rectangle();
    }

    // switch (shape){
    //     case 'circle':
    //         printf("hello you");
        // circle();
        // break;
        // case 'square':
        // square();
        // break;
        // case 'triangle':
        // triangle();
        // break;
        // case 'rectangle':
        // rectangle();
        // break;
    // }

return 0;
}



int circle(){
float radious,area,volume,perimeter;
printf("circle function");

return 0;
}
int square(){

printf("square function");
return 0;
}
int triangle(){
printf("triangle function");
return 0;
}
int rectangle(){
printf("rectangle function");
return 0;
}