//
// Created by Cesar Erebus on 10/24/21.
//

#include "iter.hpp"

int main()
{
	char charArr[3] = {'a', 'b', 'c'};

	int intArr[] = {0, 9 , 8, 7};

	std::string strs[] = {"Hello!", "Hi!", "Konban wa!"};

	int i = 3;

	iter(charArr, i, print);
	int len = 4;

	iter(intArr, len, print);
	iter(strs, len, print);
}
