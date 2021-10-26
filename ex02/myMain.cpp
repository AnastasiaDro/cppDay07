//
// Created by Cesar Erebus on 10/24/21.
//

#include "Array.hpp"



int main()
{
	Array<int> intArr(10);
	for (int i = 0; i < 10; ++i) {
		intArr[i] = i;
	}
	for (int i = 0; i < 10; ++i) {
		std::cout << intArr[i] << std::endl;
	}
	std::cout << "\nsize: " << intArr.size() << std::endl;

	std::cout << "\n-----TRYING GET ELEMENT OUT OF ARRAY BOUNDS------" << std::endl;
	try
	{
		std::cout << intArr[intArr.size()] << std::endl;
	} catch (std::exception &e) {
		std::cout << "EXCEPTION: Array index out of bounds exception!" << std::endl;
	}

	std::cout << "\n-----MAKING AN ARRAY OF CLASS OBJECTS------" << std::endl;
	Array<mClass> mClassArr(5);
	for (unsigned int i = 0; i < mClassArr.size(); ++i) {
		std::cout << mClassArr[i].geti() << std::endl;
	}
}
