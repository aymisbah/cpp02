#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int x;
        static const int fcn;
    public :
        Fixed();
        Fixed(const int n);
        Fixed(const float f);
        Fixed(const Fixed &nw);
        Fixed& operator=(const Fixed &oj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed &nw);
        bool operator<(const Fixed &nw) const;
        bool operator>=(const Fixed &nw);
        bool operator<=(const Fixed &nw);
        bool operator==(const Fixed &nw);
        bool operator!=(const Fixed &nw);


        Fixed operator+(const Fixed &nw) const;
        Fixed operator-(const Fixed &nw) const;
        Fixed operator*(const Fixed &nw) const;
        Fixed operator/(const Fixed &nw) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &on,Fixed &tw);
        static const Fixed &min(const Fixed &on,const Fixed &tw);
        static Fixed &max(Fixed &on,Fixed &tw);
        static const Fixed &max(const Fixed &on,const Fixed &tw);

};


std::ostream& operator<<(std::ostream &outpt, const Fixed &fx);





#endif 
