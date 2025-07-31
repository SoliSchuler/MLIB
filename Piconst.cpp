#include "C:\Users\solom\CppProgramming\MathLibrary\MathLibHeader.h"
#include <cmath>



double Piconstant::PiconstantApprox(){
    double P1 = 0; //initialize P1 = 0

    //for loop to itterate over 'n' (long datatype)
    for(int i = 0; i <= 1000000000; i++){
    //do taylor expansion of 4*arctangent(1) = pi
         P1 += 4*pow(-1, i)/(2*i + 1);
    }
    
    //return pi
     return P1;
}

