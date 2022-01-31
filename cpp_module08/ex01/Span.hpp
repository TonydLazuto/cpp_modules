#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vec;

	public:

		class FullSpanException : public std::exception
		{
			public :
				FullSpanException( void ) throw () {}
				virtual ~FullSpanException( void ) throw () {}
				virtual const char* what() const throw()
				{
					return "Error: Can't add more than N elements.";
				}
		};
		class NoSpanException : public std::exception
		{
			public :
				NoSpanException( void ) throw () {}
				virtual ~NoSpanException( void ) throw () {}
				virtual const char* what() const throw()
				{
					return "Error: Span  than N elements.";
				}
		};
		Span( void );
		virtual ~Span( void );
		Span(Span const & src);
		Span& operator=(Span const & rhs);

		Span( unsigned int N );

		void	addNumber(int nb);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	generate_nb(void);
};

#endif
