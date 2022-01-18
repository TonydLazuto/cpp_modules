#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire( void );
		virtual ~Fire( void );
		Fire(Fire const & src);
		Fire& operator=(Fire const & rhs);

		virtual AMateria* 	clone() const;
};

#endif
