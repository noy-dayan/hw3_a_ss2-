#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Fraction constructors"){
    CHECK_NOTHROW(Fraction());
    CHECK_NOTHROW(Fraction(1,2));
    CHECK_THROWS(Fraction(1,0));
}

// + operator
TEST_CASE("+ operator (Fraction + Fraction)"){
    Fraction a(1,2);
    CHECK_NOTHROW(a+a);
    CHECK(a+a==Fraction(1,1));
}

TEST_CASE("+ operator (Float + Fraction)"){
    Fraction a(1,2);
    CHECK_NOTHROW(0.5+a);
    CHECK(0.5+a==Fraction(1,1));
}

TEST_CASE("+ operator (Fraction + Float)"){
    Fraction a(1,2);
    CHECK_NOTHROW(a+0.5);
    CHECK(a+0.5==Fraction(1,1));
}

// - operator
TEST_CASE("- operator (Fraction - Fraction)"){
    Fraction a(3,2), b(1,2);

    CHECK_NOTHROW(a-b);
    CHECK(a-b==Fraction(1,1));
}

TEST_CASE("- operator (Fraction - Float)"){
    Fraction a(3,2);
    CHECK_NOTHROW(a-0.5);
    CHECK(a-0.5==Fraction(1,1));
}

TEST_CASE("- operator (Float - Fraction)"){
    Fraction a(1,2);
    CHECK_NOTHROW(1.5-a);
    CHECK(1.5-a==Fraction(1,1));
}

// * operator
TEST_CASE("* operator (Fraction * Fraction)"){
    Fraction a(1,2), b(2,1);
    CHECK_NOTHROW(a*b);
    CHECK(a*b==Fraction(1,1));
}

TEST_CASE("* operator (Fraction * Float)"){
    Fraction a(2,1);
    CHECK_NOTHROW(a*0.5);
    CHECK(a*0.5==Fraction(1,1));
}

TEST_CASE("* operator (Float * Fraction)"){
    Fraction a(2,1);
    CHECK_NOTHROW(a*0.5);
    CHECK(0.5*a==Fraction(1,1));
}

// / operator
TEST_CASE("/ operator (Fraction / Fraction)"){
    Fraction a(1,2);
    CHECK_NOTHROW(a/a);
    CHECK(a/a==Fraction(1,1));
}

TEST_CASE("/ operator (Fraction / Float)"){
    Fraction a(1,2);
    CHECK_NOTHROW(a/0.5);
    CHECK(a/0.5==Fraction(1,1));
}

TEST_CASE("/ operator (Float / Fraction)"){
    Fraction a(1,2);
    CHECK_NOTHROW(0.5/a);
    CHECK(0.5/a==Fraction(1,1));
}

// == operator
TEST_CASE("== operator (Fraction == Fraction)"){
    Fraction a(3,4), b(3,4);
    CHECK((a==b)==true);
}

TEST_CASE("== operator (Fraction == Float)"){
    Fraction a(1,2);
    CHECK((a==0.5)==true);
}

TEST_CASE("== operator (Float == Fraction)"){
    Fraction a(1,2);
    CHECK((0.5==a)==true);
}

// != operator
TEST_CASE("!= operator (Fraction != Fraction)"){
    Fraction a(3,4), b(3,4);
    CHECK((a!=b)==false);
}

TEST_CASE("!= operator (Fraction != Float)"){
    Fraction a(1,2);
    CHECK((a!=0.5)==false);
}

TEST_CASE("!= operator (Float != Fraction)"){
    Fraction a(1,2);
    CHECK((0.5!=a)==false);
}

// > operator
TEST_CASE("> operator (Fraction > Fraction)"){
    Fraction a(3,4), b(1,2);
    CHECK((a>b)==true);
}

TEST_CASE("> operator (Fraction > Float)"){
    Fraction a(3,4);
    CHECK((a>0.5)==true);
}

TEST_CASE("> operator (Float > Fraction)"){
    Fraction a(1,2);
    CHECK((1.5>a)==true);
}

// < operator
TEST_CASE("< operator (Fraction < Fraction)"){
    Fraction a(1,2), b(3,4);
    CHECK((a<b)==true);
}

TEST_CASE("< operator (Fraction < Float)"){
    Fraction a(3,4);
    CHECK((a<1.5)==true);
}

TEST_CASE("< operator (Float < Fraction)"){
    Fraction a(3,4);
    CHECK((0.5<a)==true);
}

// >= operator
TEST_CASE(">= operator (Fraction >= Fraction)"){
    Fraction a(3,4), b(1,2);
    CHECK((a>=b)==true);
}

TEST_CASE(">= operator (Fraction >= Float)"){
    Fraction a(3,4);
    CHECK((a>=0.5)==true);
}

TEST_CASE(">= operator (Float >= Fraction)"){
    Fraction a(1,2);
    CHECK((1.5>=a)==true);
}

// <= operator
TEST_CASE("<= operator (Fraction <= Fraction)"){
    Fraction a(1,2), b(3,4);
    CHECK((a<=b)==true);
}

TEST_CASE("<= operator (Fraction <= Float)"){
    Fraction a(3,4);
    CHECK((a<=1.5)==true);
}

TEST_CASE("<= operator (Float <= Fraction)"){
    Fraction a(3,4);
    CHECK((0.5<=a)==true);
}

// ++ operator
TEST_CASE("++ operator (Fraction++)"){
    Fraction a(1,2), b(1,2);
    CHECK_NOTHROW(a++);
    CHECK((b++)==Fraction(1,1));
}

TEST_CASE("++ operator (++Fraction)"){
    Fraction a(1,2), b(1,2);
    CHECK_NOTHROW(++a);
    CHECK((++b)==Fraction(1,1));
}

// -- operator
TEST_CASE("-- operator (Fraction--)"){
    Fraction a(1,2), b(1,2);
    CHECK_NOTHROW(a--);
    CHECK((b--)==Fraction(1,1));
}

TEST_CASE("-- operator (--Fraction)"){
    Fraction a(1,2), b(1,2);
    CHECK_NOTHROW(--a);
    CHECK((--b)==Fraction(1,1));
}

// output operator
TEST_CASE("Fraction output"){
    Fraction a(1,2), b(1,4);
    cout << a << endl;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;

}
