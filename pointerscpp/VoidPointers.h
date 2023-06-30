#pragma once
#include <iostream>

class VoidPointers
{
public:
	void exampleVoidPointers();
	int num;
	std::string name;
	void print() { std::cout << name << ":" << num << std::endl; }
};

