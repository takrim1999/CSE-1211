#include<stdio.h>
int circle();
int square();
int triangle();
int rectangle();
int main(){
    int side;
    printf("how mane sides your shape contains?\n0=circle\n1=line\n2=angle\n3=triangle\n4=quadrilateral\n>");
    scanf("%d",&side);
    switch (side){

        case 0:
            circle();
            break;
        case 1:
            printf("it is a line,not a covered area\n");
            break;
        case 2:
            printf("it is an angle,not a covered area\n");
            break;
        case 3:
            triangle();
            break;
        case 4:
            square();
            break;
        default:
            printf("our service is still limited, try (0-4) please\n");
    }
return 0;
}



int circle(){
float radious=0;
int dimension=0;
printf("dimension?(2 or 3)\n>");
scanf("%d",&dimension);
if (dimension==2){
    printf("radious of circle\n>");
    scanf("%f",&radious);
    printf("Perimete(circumfarence) : %.3f\n", 2*3.1416*radious);
    printf("Area : %.3f\n", 3.1416*radious*radious);
}
else if (dimension==3){
    printf("radious of sphere\n>");
    scanf("%f",&radious);
    printf("Surface Area : %.3f\n", (4*3.1416*radious*radious));
    printf("Volume : %.3f\n", (4*3.1416*radious*radious*radious)/3);
}
else
    printf("our geometric calculator only support till 3 dimension\n");
return 0;
}

int square(){
int dimension;
printf("dimension?(2 or 3)\n>");
scanf("%d",&dimension);
if (dimension == 2){
    printf("how many sides are equal?\n4=square\n2=rectangle");
}
return 0;
}


int triangle(){
int dimension;
float a,b,c,peri;
printf("dimension?(2 or 3)\n>");
scanf("%d",&dimension);
if (dimension==2){    
    printf("give 3 sides of your triangle(space or line break separated numbers)\n>");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b){
        peri = a+b+c;
        printf("perimeter is : %.3f\n",peri);
        peri = peri/2;
        printf("area is : %.3f\n",peri*(peri-a)*(peri-b)*(peri-c));
    }
    else
        printf("triangle can't be formed!");
}
else if (dimension==3){
float d;
printf("give 3 sides of your prism(space or line break separated numbers)\n>");
scanf("%f%f%f",&a,&b,&c);
peri = a+b+c;
printf("perimeter is : %.3f\n",peri);
peri = peri/2;
printf("area is : %.3f\n",peri*(peri-a)*(peri-b)*(peri-c));

}
else
    printf("our geometric calculator only support till 3 dimension\n");
return 0;
}


int rectangle(){
int dimension;
float a,b;
if (dimension==2){
printf("input your two sides (space or line break seperated numbers)");
scanf("%f%f",&a,&b);
}
else if (dimension==3){

}
else
printf("our geometric calculator only support till 3 dimension\n");
printf("dimension?(2 or 3)\n>");
return 0;
}