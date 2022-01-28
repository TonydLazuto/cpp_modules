#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template < typename T >
class Array
{
	private:
		int *_elet;
		int	_size;

	public:
		class OutOfMemory : public std::exception
		{
			public:
				OutOfMemory( void ) throw() {}
				virtual ~OutOfMemory( void ) throw() {}
				virtual const char* what() const throw()
				{
					return "Error: Can't access non allocated memory.";
				}

		};
		Array<T>( void ) : _elet(NULL), _size(0) {}
		Array<T>( unsigned int n )
		: _elet(new int[n]), _size(n) {}
		virtual ~Array<T>( void )
		{
			if (this->_size > 0 && this->_elet != NULL)
			{
				delete [] this->_elet;
				this->_elet = NULL;
			}
		}
		Array<T>(Array<T> const & src)
		{
			if (src._size <= 0)
				return ;
			this->_size = src._size;
			this->_elet = new int[this->_size];
			for (int i = 0; i < src._size; i++)
				*(this->_elet) = *(src._elet);
		}
		Array<T>& operator=(Array<T> const & rhs)
		{
			if (rhs._size <= 0)
				return ;
			this->_size = rhs._size;
			this->_elet = new int[this->_size];
			for (int i = 0; i < rhs._size; i++)
				*(this->_elet) = *(rhs._elet);
			return (*this);
		}
		Array<T>& operator=(T const & rhs)
		{
			if (this->_size > 0)
			{
				this->_elet = rhs;
			}
			return (*this);
		}
		T&		operator[](long index)
		{
			if (index < 0 || index >= this->_size)
				throw Array<T>::OutOfMemory();
			return (this->_elet[index]);
		}

		int		size(void) const
		{
			return this->_size;
		}
		
};


#endif
