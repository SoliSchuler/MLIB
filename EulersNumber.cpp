#include "C:\Users\solom\CppProgramming\MathLibrary\FactorialFunct\Factorial.cpp"
#include "C:\Users\solom\CppProgramming\MathLibrary\MathLibHeader.h"
#include <iostream>
#include <cmath>
using namespace std;

double EulerConst::EulerConstApprox(){
    double e = 0;
    factorialfunct fOBJ;
    
    for( int i = 0; i <= 10000; i++){
        e += 1/fOBJ.factorial(i);
    }
    return e;

}