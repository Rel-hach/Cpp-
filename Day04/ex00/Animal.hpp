#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstdio>
#include <cstdlib>

class   Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& rhs);
        Animal& operator =(const Animal& rhs);
        virtual void makeSound () const;
        virtual std::string getType() const;
};

#endif