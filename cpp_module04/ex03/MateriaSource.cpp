#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "Construct MateriaSource." << std::endl;
	for(int i = 0; i < 3; ++i)
		this->_amateria[i] = NULL;
}
MateriaSource::~MateriaSource( void ) {
	std::cout << "Destruct MateriaSource." << std::endl;
	int i = 0;
	while (i < 4 && this->_amateria[i] != NULL)
	{
		delete this->_amateria[i];
		i++;
	}
}
MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}
MateriaSource& MateriaSource::operator=(MateriaSource const & rhs) {
	for(int i = 0; i < 3; ++i)
		this->_amateria[i] = rhs._amateria[i];
	return *this;
}

void 		MateriaSource::learnMateria(AMateria* materia) {
	int i = 0;
	while (i < 4 && this->_amateria[i] != NULL)
		i++;
	if (i == 4)
	{
		std::cout << "Can't learn more Materia." << std::endl;
		return ;
	}
	this->_amateria[i] = materia;
}
AMateria* 	MateriaSource::createMateria(std::string const & type) {
	int			i = 0;
	AMateria	*created = NULL;
	while (i < 4 && this->_amateria[i]->compare(type) != 0)
		i++;
	if (i == 4)
		return 0;
	return (this->_amateria[i]);
}