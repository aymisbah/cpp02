#include "Fixed.hpp"
std::ostream& operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

int main() {
    Fixed a;            
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );       
    Fixed c(10);   
    Fixed d(b); 
         
    std::cout << b << std::endl;
    // std::cout << "a = " << a.toFloat() << std::endl;
    // std::cout << "b = " << b.toFloat() << std::endl;
    // std::cout << "c = " << c.toFloat() << std::endl;
    // std::cout << "d = " << d.toFloat() << std::endl;

    // // if (c == b)
    //     std::cout << "b + c :"<< b + c << std::endl;
    //     std::cout << "b - c :"<< b - c << std::endl;
    //     std::cout << "b * c :"<< b * c << std::endl;
    //     std::cout << "b / c :"<< b / c << std::endl;
    // // else   
    //     // std::cout << "aaaaaaaaaaaaaaaaa\n";
    // std::cout << "----------------------" << std::endl;
}