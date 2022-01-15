#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		// Brain*	_brain;
		
	public:
		Cat( void );
		~Cat( void );
		Cat(Cat const & src);
		Cat& operator=(Cat const & rhs);

		Cat( std::string type );

		void	makeSound(void) const;
};

#endif
