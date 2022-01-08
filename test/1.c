/*question:
print type of number(positive,negative,zero), if positive, print how many numbers can be found to it's negative.
example:
input: 5
output: positive, 11
*/
/*
explanation:
any positive number can be negate, means it can be 0, by same magnitude of number of oposite sign.
like 5 can be negate by -5
5 + (-5) = 0
so we need to count how many numbers are here from -5 to 5
it is simple algorithm, there are 5 numbers in positive side
1,2,3,4,5
and 5 at negative
-1,-2,-3,-4,-5
and there is a zero.
so it is always (n*2)+1
*/
#include<stdio.h>
int main(){
    int n; // declaring a variable
    printf("input your number\n>"); // printing message to input number
    scanf("%d",&n); // writing in n
    if(n==0){ //checking if 0
        printf("zero\n"); // writting 0
    }
    else if(n<0){ //checking negative
        printf("negative\n"); //writting negative
    }
    else if(n>0){ // checking positive
        printf("positive , %d\n", (2*n)+1); //printing positive + the till negation sum
    }
    else
        printf("invalid"); // i know there is no integer outside zero,positive and negative, but still, i'm a perfectionist. 
return 0;
}