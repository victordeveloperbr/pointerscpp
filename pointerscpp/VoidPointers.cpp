#include "VoidPointers.h"

//func.c
void func(void* data, int length)
{
	char* c = (char*)(data);
	// fill in the buffer with data
	for (int i = 0; i < length; ++i)
	{
		*c = 0x41;
		++c;
	}
}
/*
extern "C"
{
	void func(void* data, int length);
}*/

void VoidPointers::exampleVoidPointers()
{
	VoidPointers* mc = new VoidPointers{ 10, "Marian" };
	void* p = static_cast<void*>(mc);
	VoidPointers* mc2 = static_cast<VoidPointers*>(p);
	std::cout << mc2->name << std::endl; // "Marian"
	delete(mc);
	// use operator new to allocate untyped memory block
	void* pvoid = operator new(1000);
	char* pchar = static_cast<char*>(pvoid);
	for (char* c = pchar; c < pchar + 1000; ++c)
	{
		*c = 0x00;
	}
	func(pvoid, 1000);
	char ch = static_cast<char*>(pvoid)[0];
	std::cout << ch << std::endl; // 'A'
	operator delete(pvoid);
}