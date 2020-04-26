#include "doctest.h"
#include "solver.hpp"
#include <string>
#include <iostream>
#include <complex>
using namespace std;
using namespace solver;

TEST_CASE("real variable case") {
   RealVariable x;
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);

   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   CHECK(solve(2*x-4 == 10)== 7);
   CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
   CHECK_THROWS_AS(solve((x^2) == -16), std::exception);
   CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
   CHECK(solve(2*x-4.0 == 10.0)==7);
   
}

TEST_CASE("complex variable case") {
   ComplexVariable y;
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));

   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i));
   CHECK(solve(2*y-4 == 10)==(7+0i));
   CHECK((solve((y^2) == 16)==(4+0i)|| solve((y^2) == 16)==(-4+0i)));
   CHECK((solve((y^2) == -16)==(0+4i)|| solve((y^2) == -16)==(0-4i)));
   CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i) || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==(4+0i)));
   CHECK(solve(y+5i == 2*y+3i)==(0+2i)); 
   
}



