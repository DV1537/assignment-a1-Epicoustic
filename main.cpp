#include <iostream>
#include <fstream>
#include "array.h"

int main(int argc, const char *argv[])
{
	std::ifstream myReadFile;
	myReadFile.open(argv[1]);
	Array arr;
	float number = 0;
	float sum = 0;

	if (myReadFile.fail()) {
		std::cout << "read failed";
	}

	while (myReadFile >> number)
	{
		sum += number;
		arr.expandArray(number);
	}
	myReadFile.close();
	arr.printArray(sum);
	std::cin.get();
	std::cin.get();
	return 0;
}
