#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "Construct MateriaSource." << std::endl;
	for(int i = 0; i < 3; ++i)
		this->_stock[i] = new None();
}
MateriaSource::~MateriaSource( void ) {
	std::cout << "Destruct MateriaSource." << std::endl;
	for(int i = 0; i < 3; ++i)
		delete this->_stock[i];
}
MateriaSource::MateriaSource(MateriaSource const & src) {
	for(int i = 0; i < 3; ++i)
		delete this->_stock[i];
	for(int i = 0; i < 3; ++i)
		this->_stock[i] = src._stock[i]->clone();
	for(int i = 0; i < 3; ++i)
		*(this->_stock[i]) = *(src._stock[i]);
}
MateriaSource& MateriaSource::operator=(MateriaSource const & rhs) {
		for(int i = 0; i < 3; ++i)
		delete this->_stock[i];
	for(int i = 0; i < 3; ++i)
		this->_stock[i] = rhs._stock[i]->clone();
	for(int i = 0; i < 3; ++i)
		*(this->_stock[i]) = *(rhs._stock[i]);
	return *this;
}

void 		MateriaSource::learnMateria(AMateria* materia) {
	int i = 0;

	while (i < 4 && this->_stock[i] != NULL)
		i++;
	if (i == 4)
	{
		std::cout << "Can't learn more Materia." << std::endl;
		return ;
	}
	delete this->_stock[i];
	this->_stock[i] = materia->clone();
	*(this->_stock[i]) = *materia;
}
AMateria* 	MateriaSource::createMateria(std::string const & type) {
	int	i = 0;

	while (i < 4 && this->_stock[i]->getType().compare(type) != 0)
		i++;
	if (i == 4)
		return 0;
	return (this->_stock[i]->clone());
}
