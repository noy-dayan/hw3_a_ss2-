#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

namespace ariel {

    class Fraction {
        private:
            int numerator, denominator;

        public:
            Fraction();
            Fraction(int n, int _d_);
            
            Fraction operator+(const Fraction& other) const;
            Fraction operator+(const double& other) const;

            Fraction operator-(const Fraction& other) const;
            Fraction operator-(const double& other) const;

            Fraction operator*(const Fraction& other) const;
            Fraction operator*(const double& other) const;

            Fraction operator/(const Fraction& other) const;
            Fraction operator/(const double& other) const;

            bool operator==(const Fraction& other) const;
            bool operator==(const double& other) const;
    
            bool operator!=(const Fraction& other) const;
            bool operator!=(const double& other) const;

            bool operator>(const Fraction& other) const;
            bool operator>(const double& other) const;

            bool operator<(const Fraction& other) const;
            bool operator<(const double& other) const;

            bool operator>=(const Fraction& other) const;
            bool operator>=(const double& other) const;

            bool operator<=(const Fraction& other) const;
            bool operator<=(const double& other) const;

            Fraction operator++(); // pre-increment
            Fraction operator++(int); // post-increment
            Fraction operator--(); // pre-decrement
            Fraction operator--(int); // post-decrement
            friend std::ostream& operator<<(std::ostream& os_, const Fraction& _f_);
            friend std::istream& operator>>(std::istream& is_, const Fraction& _f_);
    };

    Fraction operator+(double _d_, Fraction &_f_);
    Fraction operator-(double _d_, Fraction &_f_);
    Fraction operator*(double _d_, Fraction &_f_);
    Fraction operator/(double _d_, Fraction &_f_);

    bool operator==(double _d_, Fraction &_f_);
    bool operator!=(double _d_, Fraction &_f_);
    bool operator>(double _d_, Fraction &_f_);
    bool operator<(double _d_, Fraction &_f_);
    bool operator>=(double _d_, Fraction &_f_);
    bool operator<=(double _d_, Fraction &_f_);

} // namespace ariel

#endif // FRACTION_H
