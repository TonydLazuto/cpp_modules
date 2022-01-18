#ifndef BOLT_HPP
# define BOLT_HPP

# include "AMateria.hpp"

class Bolt : public AMateria
{
	public:
		Bolt( void );
		virtual ~Bolt( void );
		Bolt(Bolt const & src);
		Bolt& operator=(Bolt const & rhs);

		virtual AMateria* 	clone() const;
};

#endif
