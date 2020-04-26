#include <string>
#include <complex>
#include "solver.hpp"
using solver::RealVariable, solver::ComplexVariable;
double solver::solve(RealVariable x){
    return 3.0;
}
std::complex<double> solver::solve(ComplexVariable y){
    return 6;
}
RealVariable solver::operator *(double x, RealVariable y ){
    return y;
}

RealVariable solver::operator ^(double x, RealVariable y ){
    return y;
}

RealVariable solver::operator +(double x, RealVariable y ){
    return y;
}

RealVariable solver::operator -(double x, RealVariable y ){
    return y;
}

RealVariable solver::operator /(double x, RealVariable y ){
    return y;
}

RealVariable solver::operator ==(double x, RealVariable y ){
    return y;
}

RealVariable solver::operator *(RealVariable y, double x ){
    return y;
}

RealVariable solver::operator ^(RealVariable y, double x ){
    return y;
}

RealVariable solver::operator +(RealVariable y, double x ){
    return y;
}

RealVariable solver::operator -(RealVariable y, double x ){
    return y;
}

RealVariable solver::operator /(RealVariable y, double x ){
    return y;
}

RealVariable solver::operator ==(RealVariable y, double x ){
    return y;
}

RealVariable solver::operator *(RealVariable x, RealVariable y ){
    return y;
}

RealVariable solver::operator ^(RealVariable x, RealVariable y ){
    return y;
}

RealVariable solver::operator +(RealVariable x, RealVariable y ){
    return y;
}

RealVariable solver::operator -(RealVariable x, RealVariable y ){
    return y;
}

RealVariable solver::operator /(RealVariable x, RealVariable y ){
    return y;
}

RealVariable solver::operator ==(RealVariable x, RealVariable y ){
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
