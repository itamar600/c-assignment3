#include "doctest.h"
#include "solver.hpp"
#include <string>
#include <iostream>
#include <complex>
using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

int main() {
    RealVariable x;

    cout << solve(2*x-4 == 10) << endl;  // 7
    cout << solve((x^2) == 16) << endl;   // 4 or -4
    cout << solve((x^2) == -16) << endl;  // exception: no real solution
    cout << solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) << endl;   // 4 or -4
    double xvalue = solve(2*x-4.0 == 10.0);   // xvalue == 7

    ComplexVariable y;
    std::complex<double> yvalue = solve(2*y-4 == 10);
    cout << yvalue << endl;  // 7+0i  (can be in any other format)

    cout << solve((y^2) == 16) << endl;   // 4+0i or -4+0i
    cout << solve((y^2) == -16) << endl;  // 0+4i or 0-4i
    cout << solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) << endl;   // 4+0i or -4+0i
    cout << solve(y+5i == 2*y+3i) << endl;   // 0+2i

    return 0;
}

TEST_CASE("real variable case") {
   RealVariable x;
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);

   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4) || (solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   
}

TEST_CASE("complex variable case") {
   ComplexVariable y;
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);

   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   CHECK(solve(2*y-4 == 10)==7+0i);
   CHECK((solve((y^2) == 16)==4+0i)|| (solve((y^2) == 16)==-4+0i));
   CHECK((solve((y^2) == -16)==0+4i)|| (solve((y^2) == -16)==0-4i));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i) || (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==4+0i));
   CHECK(solve(y+5i == 2*y+3i)==0+2i);
   
}



