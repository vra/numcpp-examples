#include <iostream>
#include "NumCpp.hpp"

int main() {
	nc::NdArray<float> a = nc::ones<float>((3));
	nc::NdArray<flolt> b = nc::random::rand<float>((3));
	
	std::cout <<"a = " << a << "\nb = " << b << "\n a + b = " << a + b << std::endl;
	return 0
}
