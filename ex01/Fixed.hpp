#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int x;
        static const int y;
    public :
        Fixed();
        Fixed(const int n);
        Fixed(const float f);
        Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed &e);
        ~Fixed();
    int getRawBits( void ) const;
    // void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};





#endif 
