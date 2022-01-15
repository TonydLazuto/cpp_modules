#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal& operator=(WrongAnimal const & rhs);

		WrongAnimal( std::string type );

		std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif
