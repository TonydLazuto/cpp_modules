#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int	roll;

	srand(time(NULL));
	roll = rand() % 3 + 1;
	if (roll == 1)
		return new A;
	if (roll == 2)
		return new B;
	return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "This is not a Base Child." << std::endl;
}
void identify(Base& p)
{
	try
	{
		if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
		else
			std::cout << "This is not a Base Child." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int	main(void)
{
	Base	*deriv = generate();
	
	identify(deriv);
	delete deriv;
	return 0;
}
