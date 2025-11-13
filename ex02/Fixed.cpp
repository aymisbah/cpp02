#include "Fixed.hpp"


const int Fixed::y = 8;

Fixed::Fixed() : x(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called\n";
    x = n << y;
}

Fixed::Fixed(const float f) {
    std::cout << "Float constructor called\n";
    x = roundf(f * (1 << y));
}

Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor called\n";
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called\n";
    this->x = other.x;
    return *this;
}


Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const {
    return this->x;
}

float Fixed::toFloat(void) const {
    return (float)x / (1 << y);
}

int Fixed::toInt(void) const {
    return x >> y;
}




bool Fixed::operator>(const Fixed &obj) 
{
    return (x > obj.x);
}
bool Fixed::operator<(const Fixed &obj) 
{
    return (x > obj.x);
}
bool Fixed::operator<=(const Fixed &obj) 
{
    return (x <= obj.x);
}
bool Fixed::operator>=(const Fixed &obj) 
{
    return (x >= obj.x);
}
bool Fixed::operator==(const Fixed &obj) 
{
    return (x == obj.x);
}
bool Fixed::operator!=(const Fixed &obj) 
{
    return (x != obj.x);
}

Fixed Fixed::operator+(const Fixed &i) const 
{
    return (Fixed(this->toFloat() + i.toFloat()));
}

Fixed Fixed::operator-(const Fixed &i) const {
    return (Fixed(this->toFloat() - i.toFloat()));
}


Fixed Fixed::operator*(const Fixed &i) const {
    Fixed s = this->toFloat() * i.toFloat(); 
    return s;
}

Fixed Fixed::operator/(const Fixed &i) const {
    return Fixed(this->toFloat() / i.toFloat());
}
