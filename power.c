#include <stdio.h>
#include "myMath.h"
#define E 2.71828


double Pow(double x , int y){
    double sum =1;
    if (y>0) {
    for (int i = 0; i < y; i++)
    {
        sum *= x;
    	} 
     }
    if(y<0){
    for (int i = 0; i < -1*y; i++)
    {
        sum *= x;
    } 
    return 1.0/sum;
    }
    return sum;
}

double Exp(int x){
    return Pow(E,x);
}
