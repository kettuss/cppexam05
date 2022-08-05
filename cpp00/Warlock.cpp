#include "Warlock.hpp"

Warlock::Warlock (){}

Warlock::~Warlock(){
    std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock (std::string const &name, std::string const &title){
    std::cout << name << ": This looks like another boring day." << std::endl;
    this->name = name;
    this->title = title;
}

const std::string& Warlock::getName() const{
    return(name);
}

const std::string& Warlock::getTitle() const{
    return(title);
}

void Warlock::setTitle(std::string const &title){
    this->title = title;
}

void Warlock::introduce() const
{
     std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" <<std::endl;
}