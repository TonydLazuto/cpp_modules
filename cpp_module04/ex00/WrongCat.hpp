#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat(WrongCat const & src);
		WrongCat& operator=(WrongCat const & rhs);

		WrongCat( std::string type );

		void	makeSound(void) const;
};

#endif