#include <iostream>
#include "NumCpp.hpp"

int main() {
	nc::NdArray<float> foo = nc::random::rand<float>({1, 9});
	std::cout <<"foo = " << foo << std::endl;

	// reshape, NOTE: foo is changed too, its shape is (3, 3) now!
	auto foo1 = foo.reshape(3, 3);
	std::cout << foo.shape() << std::endl;

	// convert dtype
	auto foo2 = foo.astype<double>();
	
	//indexing
	float val = foo(0, 0);
	nc::NdArray<float> bar = foo(0, {0, 3});
	nc::NdArray<float> bar1 = foo({0, 3}, {0, 3});

	// mean and sum are still nc::NdArray with shape (1, 1)
	float mean = nc::mean(foo)(0, 0);
	float sum = nc::sum(foo)(0, 0);

	// norm is different with python
	auto norm = nc::norm(foo);
	std::cout <<"foo3" << std::endl;


	return 0;

}
