#include <stdio.h>
#include "myMath.h"

int main(){
     double num;
     double resultFor1, resultFor2, resultFor3;
     printf("Please inset a real number:\n");
     scanf("%lf",&num);
     resultFor1=add(Exp((int)num),Pow(num,3));
     resultFor1 = sub(resultFor1,2);
     printf("The value of f(x) = e^x + x^3 − 2 at the point %.4lf is: %.4lf\n" ,num,resultFor1);
     resultFor2=add(mul(num,3),mul(Pow(num,2),2));
     printf("The value of f(x) = 3x + 2x^2 at the point %.4lf is: %.4lf\n" ,num,resultFor2);
     resultFor3=div(mul(Pow(num,3),4),5);
     resultFor3=sub(resultFor3,mul(num,2));
     printf("The value of f(x) = (4x^3)/5 -2x  at the point %.4lf is: %.4lf\n" ,num,resultFor3);

    return 0;
}
