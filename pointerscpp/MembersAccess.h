//
//  membersAccess.h
//  pointers
//
//  Created by Antonio Victor Tenorio on 29/06/23.
//
#pragma once;
#ifndef MembersAccess_h
#define MembersAccess_h

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

#endif /* MembersAccess_h */
