#include "student.hpp"
#include<iostream>
#include<cstring>
void Student::setGender(bool isMale)
{
    male=isMale;
}
void Student::printInfo()
{
    std::cout<<"Name:"<<name<<std::endl;
    std::cout<<"Born in:"<<born<<std::endl;
    std::cout<<"Gender:"<<(male ? "Male" : "Female")<<std::endl;
}
void Student::setBorn(int b)
{
    born=b;
}
void Student::setName(const char *s)
{
    strncpy(name,s,3);
    name[3] = '\0';
}