#include <iostream>
#include "header.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


//	mClass mc1(8), mc2(10);
//	std::cout	<< "mc1: " << mc1
//				<< "   "
//				<< "mc2: " << mc2
//				<< std::endl;
//	std::cout << " swap " << std::endl;
//	swap(mc1, mc2);
//	std::cout	<< "mc1: " << mc1
//				<< "   "
//				<< "mc2: " << mc2
//				<< std::endl;
//
//	std::cout << "max: " << max(mc1, mc2) << std::endl;
//	std::cout << "min: " << min(mc1, mc2) << std::endl;

	return 0;
}
