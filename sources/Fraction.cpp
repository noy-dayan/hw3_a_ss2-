#include <iostream>
#include <algorithm>
#include "Fraction.hpp"

namespace ariel {
    // Fraction constructors
    Fraction::Fraction() : numerator(1), denominator(1) {}
    Fraction::Fraction(int n, int _d_) : numerator(n), denominator(_d_) {
        if (_d_ == 0){
            throw std::invalid_argument("Zero value not allowed");
        }
    }

    // + operator
    Fraction Fraction::operator+(const Fraction& other) const {
        return Fraction(1,1);
    }

    Fraction Fraction::operator+(const double& other) const {
        return Fraction(1,1);
    }
    
    Fraction operator+(double _d_, Fraction &_f_){
        return Fraction(1,1);
    }

    // - operator
    Fraction Fraction::operator-(const Fraction& other) const {
        return Fraction(1,1);
    }
  
    Fraction Fraction::operator-(const double& other) const {
        return Fraction(1,1);
    }
    
    Fraction operator-(double _d_, Fraction &_f_){
        return Fraction(1,1);
    }

    // * operator
    Fraction Fraction::operator*(const Fraction& other) const {
        return Fraction(1,1);
    }
    
    Fraction Fraction::operator*(const double& other) const {
        return Fraction(1,1);
    }
    
    Fraction operator*(double _d_, Fraction &_f_){
        return Fraction(1,1);
    }

    // / operator
    Fraction Fraction::operator/(const Fraction& other) const {
        return Fraction(1,1);
    }
    
    Fraction Fraction::operator/(const double& other) const {
        return Fraction(1,1);
    }
    
    Fraction operator/(double _d_, Fraction &_f_){
        return Fraction(1,1);
    }

    // == operator
    bool Fraction::operator==(const Fraction& other) const {
        return true;
    }
    
    bool Fraction::operator==(const double& other) const {
        return true;
    }

    bool operator==(double _d_, Fraction &_f_){
        return true;
    }

    // != operator
    bool Fraction::operator!=(const Fraction& other) const {
        return false;
    }
    
    bool Fraction::operator!=(const double& other) const {
        return false;
    }

    bool operator!=(double _d_, Fraction &_f_){
        return false;
    }

    // > operator
    bool Fraction::operator>(const Fraction& other) const {
        return true;
    }

    bool Fraction::operator>(const double& other) const {
        return true;
    }

    bool operator>(double _d_, Fraction &_f_){
        return true;
    }

    // < operator
    bool Fraction::operator<(const Fraction& other) const {
        return true;
    }
    
    bool Fraction::operator<(const double& other) const {
        return true;
    }

    bool operator<(double _d_, Fraction &_f_){
        return true;
    }

    // >=operator
    bool Fraction::operator>=(const Fraction& other) const {
        return true;
    }
    
    bool Fraction::operator>=(const double& other) const {
        return true;
    }

    bool operator>=(double _d_, Fraction &_f_){
        return true;
    }

    // <= operator
    bool Fraction::operator<=(const Fraction& other) const {
        return true;
    }

    bool Fraction::operator<=(const double& other) const {
        return true;
    }

    bool operator<=(double _d_, Fraction &_f_){
        return true;
    }

    // ++ operator
    Fraction Fraction::operator++() {
        return Fraction(1,1);
    }

    Fraction Fraction::operator++(int) {
        return Fraction(1,1);
    }

    // -- operator
    Fraction Fraction::operator--() {
        return Fraction(1,1);
    }

    Fraction Fraction::operator--(int) {
        return Fraction(1,1);
    }

    // output operator
    std::ostream& operator<<(std::ostream& os_, const Fraction& _f_) {
        os_ << _f_.numerator << "/" << _f_.denominator;
        return os_;
    }  

    // input operaotr
    std::istream& operator>>(std::istream& is_, const Fraction& _f_){
        return is_;
    }
}