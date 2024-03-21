#pragma once
#include <string>

using namespace std;

class Animal{
    protected:
    string name;
    int age;

    public:
    Animal(string name, int age);
    virtual void printInfo();
};

class Zebra:public Animal{
    private:
    int numStripes;

    public:
    Zebra(string name, int age, int numStripes);
    virtual void printInfo();
};

class Cat:public Animal{
    private:
    string favoriteToy;

    public:
    Cat(string name, int age, string favoriteToy);
    virtual void printInfo();
};