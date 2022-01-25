#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data		mydata("DataName");
	uintptr_t	myuintptr_t = serialize(&mydata);
	Data*    	mynewdata = deserialize(myuintptr_t);
	
	if (&mydata == mynewdata)
		std::cout << "Very good reinterpret_cast." << std::endl;
	else
		std::cout << "Bad behavior." << std::endl;

	std::cout << "Address1: " << &mydata << std::endl;
	std::cout << "Address2: " << mynewdata << std::endl;
	std::cout << mydata.getName() << std::endl;
	std::cout << mynewdata->getName() << std::endl;
	return 0;
}
