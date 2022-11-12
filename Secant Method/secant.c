//secant method 
#include<stdio.h>
#include<math.h>

float f(float x){
    return 2*x*x+4*x-10;
}

int main(){
    float a,b,e,c;
    printf("enter the initial guess\n");
    scanf("%f%f",&a,&b);
    printf("Enter the tolerance \n");
    scanf("%f",&e);
    do{
        c=b-(f(b)*(b-a)/(f(b)-f(a)));
        a=b;
        b=c;


    }while(fabs(a-b)>e);

    printf("root = %f",c);
    return 0;
}