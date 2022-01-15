#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class Amateria
{
	protected:
		std::string _type;

	public:
		Amateria( void );
		virtual ~Amateria( void );
		Amateria(Amateria const & src);
		Amateria& operator=(Amateria const & rhs);

		// AMateria(std::string const & type);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter const& target);
};

#endif
