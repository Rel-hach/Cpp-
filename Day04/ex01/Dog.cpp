#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Default constructor of the Derived class [ Dog ] is called ." << std::endl;

}

Dog::~Dog()
{
    std::cout << "Destructor of the Derived class [ Dog ] is called ." << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
    std::cout << "copy constructor of the derived class [ Dog ] is called ." << std::endl;
    if (this != &rhs)
        *this = rhs;
}
       
Dog& Dog::operator =(const Dog& rhs)
{
    std::cout << "Assignment operator of the derived class [ Dog ] is called ." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);   
}

void Dog::makeSound() const
{
    std::cout << "Dog sound: Haaaaaw! Haaaaaw!" << std::endl;
}

std::string Dog::getType() const
{
    return (this->_type);
}
