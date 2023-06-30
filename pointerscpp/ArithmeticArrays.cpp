#include <iostream>
#include "ArithmeticArrays.h"

void func(int arr[], int length)
{
	// returns pointer size.
	size_t test = sizeof(arr);

	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
}

void ArythmeticArrays::sumTotal()
{
	int i[6]{ 1, 2, 3, 4, 5, 6 };
	// sizeof(i) = total bytes;
	std::cout << "sizeof(i) :" << sizeof(i) << std::endl;
	std::cout << "sizeof(i[0]) :" << sizeof(i[0]) << std::endl;
	int j = sizeof(i) / sizeof(i[0]);
	func(i, j);
}