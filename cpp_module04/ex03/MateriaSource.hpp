#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria	*_stock[4];

	public:
		
		MateriaSource( void );
		virtual ~MateriaSource( void );
		MateriaSource(MateriaSource const & src);
		MateriaSource& operator=(MateriaSource const & rhs);

		virtual void 		learnMateria(AMateria*);
		virtual AMateria* 	createMateria(std::string const & type);
};

#endif
