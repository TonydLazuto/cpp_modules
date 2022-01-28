#include "template.hpp"

int		main(void)
{
	int a[] = {5, 3, 7, 12};
	int b = 4;

	::iter<int, int>(&a[0], b, &show_multiply);

	float c[] = {5.5, 3.7, 7.2, 12.23};

	::iter<float, int>(&c[0], b, &show_multiply);

	short d[] = {54, 43, 98, 12};

	::iter<short, int>(&d[0], b, &show_divide);
	

	return 0;
}
