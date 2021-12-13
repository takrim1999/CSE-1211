#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,det;
    float x1,x2;
    printf("as a quadratic equaion ax^2+bx+c\ninput the value of a,b,c\(space separated integers or line break\) : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("your equation is %dx^2+%dx+%d",a,b,c);
    det = pow(b,2)-(4*a*c);
    // printf("\n%d",det);
    if (det<0){
        printf("imaginary roots");
    }
    else if(det == 0){
        x1 = (-b)/(2*a);
        printf("both roots are equal, and they are %.2f",x1);
    }
    else if(det > 0){
        x1 = (sqrt(det)-b)/(2*a);
        x2 = (-b-sqrt(det))/(2*a);
        printf("\nx1 = %.2f",x1);
        printf("\nx2 = %.2f",x2);
    }
return 0;
}