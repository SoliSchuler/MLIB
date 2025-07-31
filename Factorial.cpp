#include "C:\Users\solom\CppProgramming\MathLibrary\MathLibHeader.h"
#include <iostream>
using namespace std;
double factorialfunct::factorial(int n){
    if(n > 1){
        int nfactorial = n*factorial(n - 1);
        return nfactorial;
    }
    else{
        return 1;
    }
}
