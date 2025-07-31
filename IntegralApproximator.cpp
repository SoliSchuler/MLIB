#include "C:\Users\solom\CppProgramming\MathLibrary\MathLibHeader.h"
#include <functional>
#include <iostream>
using namespace std;


double IntApprox::DefInt(double x0, double x2, int n, double func(double x)){
    double dx = (x2 - x0)/n; //relative infitesimal distance
    double MidSimpson; //MidSimpson used to get the middle (non-endpoints) sum expansion
    double oddeven; //find's if the i index is odd or even. If odd multiply funct by 4, if even multiply funct by 2
    double SimpsonRule; //calculates the entire sum expansion 

    //Laws: x2 > x0 and n must always be even (n % 2 == 0) in theoretical/non-theoretical applications
    if(x0 > x2){
        cout << x2 << " must be greater than " << x0 << "\n";
        return -1;
    }
    else if(n % 2 != 0){
        cout << n << " is odd, recall: 'n' (number of partitions) must always be even! \n";
        return -1;
    }
    else{
        cout << "calculating integral using Simpson's rule! \n";
        //get the non-endpoint sum expansion
        for(int i = 1; i < n; i++){
            double xi = i*dx + x0;
            if(i % 2 == 0){
                oddeven += 2*func(xi);
            }
            else{
                oddeven += 4*func(xi);
            }
            MidSimpson = oddeven;
        }
        SimpsonRule = dx*(func(x0) + func(x2) + MidSimpson)/3;
        return SimpsonRule;

    }

}