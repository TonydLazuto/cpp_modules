#include "Span.hpp"
#include <ctime>

Span::Span( void ) : _N(), _vec() {}
Span::Span( unsigned int N ) : _N(N), _vec() {}
Span::~Span( void ) {}

Span::Span(Span const & src)
{
	*this = src;
}
Span& Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_vec = rhs._vec;
	return *this;
}

void	Span::addNumber(int nb)
{
	if (this->_vec.size() == this->_N)
		throw FullSpanException();
	this->_vec.push_back(nb);
	
}
int		Span::shortestSpan(void)
{
	if (this->_vec.size() < 2)
		throw NoSpanException();
	sort(this->_vec.begin(), this->_vec.end());
	int shortest = this->_vec[1] - this->_vec[0];
	for (unsigned long i = 1; i < this->_vec.size() - 1; i++)
		if (this->_vec[i + 1] - this->_vec[i] < shortest)
			shortest = this->_vec[i + 1] - this->_vec[i];
	return shortest;
}
int		Span::longestSpan(void)
{
	if (this->_vec.size() < 2)
		throw NoSpanException();
	int min_span = *std::min_element(this->_vec.begin(), this->_vec.end());
    int max_span = *std::max_element(this->_vec.begin(), this->_vec.end());
	return (max_span - min_span);
}


void	Span::generate_nb(void)
{
	std::srand( std::time(NULL) );
	for (unsigned int i = 0; i < _N; i++)
		_vec.push_back(rand());
}
