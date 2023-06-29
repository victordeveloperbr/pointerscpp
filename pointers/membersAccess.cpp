//
//  membersAccess.cpp
//  pointers
//
//  Created by Antonio Victor Tenorio on 29/06/23.
//

#include <iostream>
#include <string>
#include "membersAccess.h"

// Accepts a MemAccess pointer
void MembersAccess::func_A(MemAccess* ma)
{
    /*
     Modify the object that ma points to
     All copies of the pointer will point to the same
     modified object.
     */
    ma->num = 32;
}

// Accepts a MemAccess object
void MembersAccess::func_B(MemAccess ma)
{
    /*
     ma is a regular object, not a pointer.
     User the "." operator to access members.
     This statement modifies only the local copy of ma.
     */
    ma.num = 14;
    std::cout << "Local copy of ma: ";
    ma.print();
}

void MembersAccess::sayHello() {
    std::cout << "HELLO FROM CLASS" << std::endl;
}

void MembersAccess::playMemberAccess()
{
    // to declare a pointer type we're using the * operator.
    // we're using 'new' to allocate and initialize memory.
    MemAccess* pma = new MemAccess { 132, "Bravo Mike" };
    
    // Prints the memory address.
    std::cout << pma << std::endl;
    
    // Copy the pointed-to Object by dereferencing the pointer
    // to access the contents of the memory location.
    // ma is separate object, allocated here on the stack.
    MemAccess ma = *pma;
    
    // Declare a pointer that points to ma using the address of operator
    MemAccess* pcopy = &ma;
    
    // Use the -> operator to access the object's public members;
    pma->print(); // "Bravo Mike", 132
    
    // Copy the pointer. Now pma and pma2 point to same object
    MemAccess* pma2 = pma;
    
    // Use copied pointer to modify the original object
    pma2->name = "Felicia";
    pma->print(); // "Felicia, 132
    pma2->print(); // "Felicia", 132
    
    //Pass the pointer to a function.
    func_A(pma);
    pma->print(); // "Felicia", 32
    pma2->print(); // "Felicia", 32
    
    // Dereference the pointer and pass a copy
    // of the pointed-to object to a function
    func_B(*pma);
    pma->print(); // "Felicia", 132 (original not modified by function)
    
    delete(pma); // we shouldn't forget to give memory back to operating system!
    //    delete(pma2); // crash! memory location was already deleted.
    

}
