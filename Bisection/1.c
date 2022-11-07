#include<stdio.h>
#include<math.h>

float f(float x){
    return x*x+4*x-9;
}

int main(){
    float a,b,m,e;
    printf("Enter two initial guesses:\n");
    scanf("%f%f",&a,&b);
    printf("Enter tolerance value:\n");
    scanf("%f",&e);
    if(f(a)*f(b)>0){
        printf("Your initial guesses are wrong!!! please enter another initial guesses\n");
    }else{
        do{
            m=(a+b)/2;
            if(f(a)*f(m)<0){
                b=m;
            }else{
                a = m;
            }
        }while(fabs(a-b)>e);
    }
    printf("The root is: %f",a);
    return 0;
}