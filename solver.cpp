#include <string>
#include <iostream>
#include <complex>
#include <cmath>
#include "solver.hpp"
using solver::RealVariable, solver::ComplexVariable;


double solver::solve(RealVariable x){
    //std::cout << x.pow_2.coeff << "x^2 " << x.pow_1.coeff << "x "<< x.free << "==" << x.result << std::endl;
    double solution=0;
    //if 0*x^2, than for example 5x+6=10 => 5x=4 => x=5/4.
    if(x.pow_2.coeff==0){
        //to avoid from 0/0
        if(x.pow_1.coeff==0 && x.result-x.free==0 )
            return 0;
        //if for example 6/0, so not have solution
        else if(x.pow_1.coeff==0)
            throw std::runtime_error("no solution");
        solution=(x.result-x.free)/x.pow_1.coeff;
        return solution;
    }
    //3x^2+6x+7=16 => 3x^2+6x-9=0
    x.free-=x.result;
    double a=x.pow_2.coeff, b=x.pow_1.coeff, c=x.free;
    //conculating the solution with roots formula, 
    // if ((b*b)-4*a*c)<0, didnt have real solution.
    if((b*b)-4*a*c<0){
        throw std::runtime_error("no solution");
    }
    solution=(b*-1+sqrt((b*b)-4*a*c))/(2*a);
    return solution;
}
std::complex<double> solver::solve(ComplexVariable y){
    return 6;
}
RealVariable solver::operator *(double x, RealVariable y ){
    y.pow_2.coeff*=x;
    y.pow_1.coeff*=x;
    y.free*=x;
    return y;
}

// RealVariable solver::operator ^(double x, RealVariable y ){
//     y.pow=x;
//     return y;
// }

RealVariable solver::operator +(double x, RealVariable y ){
    y.free+=x;
    return y;
}

RealVariable solver::operator -(double x, RealVariable y ){
   y.free=x-y.free;
    return y;
}

RealVariable solver::operator /(double x, RealVariable y ){
    if(y.pow_2.coeff!=0)
        y.pow_2.coeff=x/y.pow_2.coeff;
    if(y.pow_1.coeff!=0)
        y.pow_1.coeff=x/y.pow_1.coeff;
    if(y.free!=0)
        y.free=x/y.free;
    return y;
}

RealVariable solver::operator ==(double x, RealVariable y ){
    y.result=x;
    return y;
}

RealVariable solver::operator *(RealVariable y, double x ){
    y=x*y;
    return y;
}

RealVariable solver::operator ^(RealVariable y, double x ){
    if(x==2){
        y.pow_2.coeff=y.pow_1.coeff*y.pow_1.coeff;
        y.pow_1.coeff=2*y.pow_1.coeff*y.free;
        y.free=y.free*y.free;
    }
    return y;
}

RealVariable solver::operator +(RealVariable y, double x ){
    y=x+y;
    return y;
}

RealVariable solver::operator -(RealVariable y, double x ){
    y.free-=x;
    return y;
}

RealVariable solver::operator /(RealVariable y, double x ){
    if(x!=0){
        y.pow_2.coeff/=x;
        y.pow_1.coeff/=x;
        y.free/=x;
    }
    return y;
}

RealVariable solver::operator ==(RealVariable y, double x ){
    y.result=x;
    return y;
}

RealVariable solver::operator *(RealVariable x, RealVariable y ){
    if(y.pow_1.coeff!=0 && x.pow_1.coeff!=0){
        y.pow_2.coeff=y.pow_1.coeff*x.pow_1.coeff;
        y.pow_1.coeff=y.pow_1.coeff*x.free+x.pow_1.coeff*y.free;
        y.free*=x.free;
    }
    else if(y.pow_2.coeff!=0){
        // y.pow_2.coeff*=x.free;
        // y.pow_1.coeff*=x.free;
        // y.free*=x.free;
        y=y*x.free;
    }
    else if(x.pow_2.coeff!=0){
        // x.pow_2.coeff*=y.free;
        // x.pow_1.coeff*=y.free;
        // x.free*=y.free;
        x=x*y.free;
        return x;
    }
    else{
        y.free*=x.free;
    }
    return y;
}

// RealVariable solver::operator ^(RealVariable x, RealVariable y ){
//     return y;
// }

RealVariable solver::operator +(RealVariable x, RealVariable y ){
    // y.free+=x.free;
    // if(y.pow_2.pow==1 || x.pow_2.pow==1 ){
    //     y.pow_2.coeff+=x.pow_2.coeff;
    //     y.pow_2.pow=1;
    // }
    // if(y.pow_1.pow==1 || x.pow_1.pow==1 ){
    //     y.pow_1.coeff+=x.pow_1.coeff;
    //     y.pow_1.pow=1;
    // }
    y.pow_2.coeff+=x.pow_2.coeff;
    y.pow_1.coeff+=x.pow_1.coeff;
    y.free+=x.free;
    return y;
}

RealVariable solver::operator -(RealVariable x, RealVariable y ){
    y=y*-1;
    y=x+y;
    return y;
}

RealVariable solver::operator /(RealVariable x, RealVariable y ){
    y=1/y;
    y=x*y;
    return y;
}

RealVariable solver::operator ==(RealVariable x, RealVariable y ){
    y=y-x;
    y.result=0;
    return y;
}


ComplexVariable solver::operator ^(std::complex<double> x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator +(std::complex<double> x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator -(std::complex<double> x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator *(std::complex<double> x, ComplexVariable y ){
        return y;
}

ComplexVariable solver::operator /(std::complex<double> x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator ==(std::complex<double> x, ComplexVariable y ){
        return y;
}

ComplexVariable solver::operator ^(ComplexVariable y, std::complex<double> x ){
    return y;
}

ComplexVariable solver::operator +(ComplexVariable y, std::complex<double> x ){
    return y;
}

ComplexVariable solver::operator -(ComplexVariable y, std::complex<double> x ){
    return y;
}

ComplexVariable solver::operator *(ComplexVariable y, std::complex<double> x ){
        return y;
}

ComplexVariable solver::operator /(ComplexVariable y, std::complex<double> x ){
    return y;
}

ComplexVariable solver::operator ==(ComplexVariable y, std::complex<double> x ){
        return y;
}

ComplexVariable solver::operator *(ComplexVariable x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator ^(ComplexVariable x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator +(ComplexVariable x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator -(ComplexVariable x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator /(ComplexVariable x, ComplexVariable y ){
    return y;
}

ComplexVariable solver::operator ==(ComplexVariable x, ComplexVariable y ){
    return y;
}

std::complex<double> solver::operator +(double x, std::complex<double> y){
    return y;
}

std::complex<double> solver::operator -(double x, std::complex<double> y){
    return y;
}

