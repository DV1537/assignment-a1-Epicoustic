#include "array.h"
#include <iostream>

Array::Array(){
	arrayIter = 0;
	arraySize = 1;
	numberArray = new float[arraySize];
	initializeArray();
}

Array::~Array() {
	delete[] numberArray;
}

void Array::initializeArray() {
	for (int i = 0; i < arraySize; i++) {
		numberArray[i] = 0;
	}
}

void Array::expandArray(float num) {
	arraySize++;
	float *tempArray = new float[arraySize];
	numberArray[arrayIter] = num;
	memcpy(tempArray, numberArray, sizeof(float) * arraySize);
	delete[] numberArray;
	numberArray = tempArray;
	arrayIter++;
}

void Array::printArray(float sum) {
	float totalAverage = sum / arrayIter;
	if (arrayIter == 0) {
		std::cout << "0";
	}
	for (int i = 0; i < arrayIter; i++) {
		if (numberArray[i] > totalAverage) {
			std::cout << numberArray[i] << " ";
		}
	}
}
