//
//  membersAccess.h
//  pointers
//
//  Created by Antonio Victor Tenorio on 29/06/23.
//
#pragma once;
#ifndef membersAccess_h
#define membersAccess_h

class MemAccess
{
public:
    int num;
    std::string name;
    void print() { std::cout << name << ":" << num << std::endl; }
};

class MembersAccess {
public:
   
    void func_A(MemAccess* ma);
    void func_B(MemAccess ma);
    void playMemberAccess();
    void sayHello();

};

#endif /* membersAccess_h */
