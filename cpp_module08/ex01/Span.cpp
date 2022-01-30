#include "Span.hpp"

Span::Span( void ) {}
Span::Span( unsigned int N ) : _N(N), _lst() {}
Span::~Span( void ) {}

Span::Span(Span const & src)
{
	*this = src;
}
Span& Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_lst = rhs._lst;
	return *this;
}

void	Span::addNumber(int nb)
{
	
	if (this->_lst.size() == this->_N)
		throw SpanException();
	this->_lst.push_front(nb);
	
}
int		Span::shortestSpan(void)
{
	this->_lst.sort();
	return 1;
	
}
int		Span::longestSpan(void)
{
	this->_lst.sort();
	return 1;
}
