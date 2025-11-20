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

Fixed::Fixed(const Fixed &nw) {
    std::cout << "Copy constructor called\n";
    *this = nw;
}

Fixed &Fixed::operator=(const Fixed &oj) {
    std::cout << "Copy assignment operator called\n";
    this->x = oj.x;
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

std::ostream& operator<<(std::ostream &outpt, const Fixed &fix)
{
    return  outpt << fix.toFloat();
}
