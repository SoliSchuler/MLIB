#pragma once
#include <functional>
using namespace std;

class Piconstant{
    public:
    static double PiconstantApprox();
};

class IntApprox{
    public:
    double DefInt(double x0, double x2, int n, double func(double x));
};
class EulerConst{
    public:
    double EulerConstApprox();
};

class factorialfunct{
    public:
    double factorial(int n1);

};



