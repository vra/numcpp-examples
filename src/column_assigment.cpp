#include "NumCpp.hpp"

int main() {
	auto a = nc::NdArray<float>{{1, 2, 3}, {4, 5, 6}};
	auto b = a * -1.0f;

	a.put(0, a.cSlice(),  b(0, b.cSlice()));

	std::cout <<"a: " << a << std::endl;
	std::cout <<"b: " << b << std::endl;

	return 0;
}
