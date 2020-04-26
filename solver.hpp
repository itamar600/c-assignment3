#pragma once
#include <complex>
namespace solver{
    typedef struct RealVariable{
        public:
        double variable=0;
    } RealVariable;

    typedef struct ComplexVariable{
        public:
        double variable=0;
    } ComplexVariable;
    double solve(RealVariable x);
    std::complex<double> solve(ComplexVariable y);
    RealVariable operator *(double x, RealVariable y );
    RealVariable operator ^(double x, RealVariable y );
    RealVariable operator +(double x, RealVariable y );
    RealVariable operator -(double x, RealVariable y );
    RealVariable operator /(double x, RealVariable y );
    RealVariable operator ==(double x, RealVariable y );
    RealVariable operator *(RealVariable y, double x );
    RealVariable operator ^(RealVariable y, double x );
    RealVariable operator +(RealVariable y, double x );
    RealVariable operator -(RealVariable y, double x );
    RealVariable operator /(RealVariable y, double x );
    RealVariable operator ==(RealVariable y, double x );
    RealVariable operator *(RealVariable x, RealVariable y );
    RealVariable operator ^(RealVariable x, RealVariable y );
    RealVariable operator +(RealVariable x, RealVariable y );
    RealVariable operator -(RealVariable x, RealVariable y );
    RealVariable operator /(RealVariable x, RealVariable y );
    RealVariable operator ==(RealVariable x, RealVariable y );
    ComplexVariable operator *(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator ^(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator +(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator -(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator /(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator ==(std::complex<double> x, ComplexVariable y );
    ComplexVariable operator *(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator ^(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator +(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator -(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator /(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator ==(ComplexVariable y, std::complex<double> x );
    ComplexVariable operator *(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator ^(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator +(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator -(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator /(ComplexVariable x, ComplexVariable y );
    ComplexVariable operator ==(ComplexVariable x, ComplexVariable y );
};