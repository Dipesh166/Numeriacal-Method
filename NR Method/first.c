#include<stdio.h>
#include<math.h>
float f(float x){
    return sin(x)-1-x*x*x;
}

float df(float x){
    return cos(x)-3*x*x;

}

int main(){
    float a,e,b;
    printf("Enter the initial guess\n");
    scanf("%f",&a);
    printf("Enter the tolerance value\n");
    scanf("%f",&e);

    do
    {
        /* code */
        b=a;
        a=b-(f(a)/df(b));
    } while (fabs(a-b)>e);

    printf("Root is %f",b);
    

    return 0;
}