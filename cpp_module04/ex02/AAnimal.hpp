#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string _type;

	public:
		AAnimal( void );
		virtual ~AAnimal( void );
		AAnimal(AAnimal const & src);
		AAnimal& operator=(AAnimal const & rhs);

		AAnimal( std::string type );

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif
