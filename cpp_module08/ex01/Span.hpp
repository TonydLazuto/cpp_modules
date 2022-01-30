#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <list>

class Span
{
	private:
		unsigned int    _N;
		std::list<int>	_lst;
		Span( void );

	public:

		class SpanException : public std::exception
		{
			public :
				SpanException( void ) throw () {}
				virtual ~SpanException( void ) throw () {}
				virtual const char* what() const throw()
				{
					return "Error: Can't add more than N elements.";
				}
		};
		virtual ~Span( void );
		Span(Span const & src);
		Span& operator=(Span const & rhs);

		Span( unsigned int N );

		void	addNumber(int nb);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif
