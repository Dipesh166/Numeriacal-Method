// fixed point iteration

#include<stdio.h>
#include<math.h>

float g(float x){
    return 10/(x+4);
}

int main (){
    float a,e,b;
    printf("Enter initial guess\n");
    scanf("%f",&a);
    printf("Enter tolerance value \n");
    scanf("%f",&e);
    do{
        b=a;
        a=g(b);

    }while(fabs(a-b)>e);
    printf("root=%f",a);

    return 0;
}