#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *br;
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat& rhs);
        Cat& operator =(const Cat& rhs);
        void makeSound() const;
        std::string getType() const;
        void putNewIdea(unsigned int i, std::string idea);
        std::string getIdea(unsigned int i);
};

#endif