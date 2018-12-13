#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Array {
public:
	Array();
	~Array();
	void printArray(float sum);
	void expandArray(float num);
private:
	int arrayIter;
	int arraySize;
	float *numberArray;
	void initializeArray();
};

#endif