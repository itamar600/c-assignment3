#pragma once
#include <complex>
namespace solver{
    typedef struct RealVariable{
        public:
        struct pow_2{
            double coeff=0;
        }pow_2;
        struct pow_1{
            double coeff=1;
        }pow_1;
        double free=0;
        double result=0;
    } RealVariable;

    typedef struct ComplexVariable{
        public:
        struct pow_2{
            std::complex<double> coeff=0;
        }pow_2;
        struct pow_1{
            std::complex<double> coeff=1;
        }pow_1;
        std::complex<double> free=0;
        std::complex<double> result=0;
    } ComplexVariable;
    double solve(RealVariable x);
    std::complex<double> solve(ComplexVariable y);
    std::complex<double> operator +(double x, std::complex<double> y);
    std::complex<double> operator -(double x, std::complex<double> y);
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