#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixp(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nb ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixp = nb << Fixed::_bits;
}

Fixed::Fixed( const float nb ) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)(roundf(nb * (1 << Fixed::_bits))));
}	

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixp = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<( std::ostream & o, Fixed const & src ) {
	o << src.toFloat();
	return o;
}

int Fixed::getRawBits(void) const {
	return this->_fixp;
}

void Fixed::setRawBits(int const raw) {
	this->_fixp = raw;
}

float Fixed::toFloat( void ) const {
	float val = (float)this->getRawBits() / (float)(1 << Fixed::_bits);
	return val;
}

int Fixed::toInt( void ) const {
	int val = this->getRawBits() >> Fixed::_bits;
	return val;
}
