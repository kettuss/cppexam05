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

void Warlock::learnSpell(const ASpell * aspell){
    if (aspell){
        std::vector<ASpell*>::iterator ite = this->spellbook.end();
        for (std::vector<ASpell*>::iterator it = this->spellbook.begin(); it != ite; it++){
            if ((*it)->getName() == aspell->getName()){
                return;
            }
        }
        this->spellbook.push_back(aspell->clone());
    }
}

void Warlock::forgetSpell(std::string aspell){  
        std::vector<ASpell*>::iterator ite = this->spellbook.end();
        for (std::vector<ASpell*>::iterator it = this->spellbook.begin(); it != ite; it++){
            if ((*it)->getName() == aspell){
                delete *it;
                it = this->spellbook.erase(it);
            }
        }
}

void Warlock::launchSpell(std::string spellname, const ATarget& target){
        std::vector<ASpell*>::iterator ite = this->spellbook.end();
        for (std::vector<ASpell*>::iterator it = this->spellbook.begin(); it != ite; it++){
            if ((*it)->getName() == spellname){
                (*it)->launch(target);
                return;
            }
        }
}