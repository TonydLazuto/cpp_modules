#include <iostream>
#include <Array.hpp>
#include <cstdlib>

#define MAX_VAL 5
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "i -> " << numbers[i] << std::endl;
		std::cout << "i -> " << mirror[i] << std::endl;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		tmp[2] = 123;
		std::cout << "tmp[2] : " << tmp[2] << std::endl;
		std::cout << "numbers[2] : " << numbers[2] << std::endl;
		Array<int> test(tmp);
		test[2] = 456;
		std::cout << "test[2] : " << test[2] << std::endl;
		std::cout << "tmp[2] : " << tmp[2] << std::endl;
		std::cout << "numbers[2] : " << numbers[2] << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << "i -> " << numbers[i] << std::endl;
	}
	delete [] mirror;//
	return 0;
}

