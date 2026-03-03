#pragma once
class Student
{
    private:
    char name[4];
    int born;
    bool male;
    public:
    void setName(const char *s);
    void setBorn(int b);
    void setGender(bool isMale);
    void printInfo();
};