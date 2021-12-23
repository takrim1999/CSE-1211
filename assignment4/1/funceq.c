#include<stdio.h>
#include<math.h>
int roots(float x, float y, float z);
float root1(float a, float b, float d);
float root2(float a, float b, float d);
float determinant(float a, float b, float c);
int main(){
    float a,b,c;
    printf("as a quadratic equaion ax^2+bx+c\ninput the value of a,b,c(space separated integers or line break) : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("your equation is %.2fx^2+%.2fx+%.2f\n",a,b,c);
    roots(a,b,c);

return 0;
}

int roots(float x, float y, float z){
    if (determinant(x,y,z) == 0){
        printf("and they are %.2f\n",(-y)/(2*x));        
    }
    else if(determinant(x,y,z) > 0)
        printf("x1 = %.2f",root1(x,y,determinant(x,y,z)));
        printf("x2 = %.2f",root2(x,y,determinant(x,y,z)));
        printf("%f",determinant(x,y,z)>0);
return 0;
}

float determinant(float a, float b, float c){
    if (pow(b,2)-(4*a*c) == 0){
        printf("both roots are equal\n");
        return 0;
    }
    if (pow(b,2)-(4*a*c) < 0){
        printf("roots are imaginary\n");
        return -5;
    }
    if (pow(b,2)-(4*a*c) > 0){
        return (pow(b,2)-(4*a*c) < 0);
    }
}

float root1(float a, float b, float d){
    return (sqrt(d)-b)/(2*a);        
}
float root2(float a, float b, float d){
    return (-b-sqrt(d))/(2*a);
}