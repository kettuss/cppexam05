#include "SpellBook.hpp"

SpellBook::SpellBook (){}

SpellBook::~SpellBook(){
}

void SpellBook::learnSpell(const ASpell * aspell){
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

void SpellBook::forgetSpell(const std::string &aspell){  
        std::vector<ASpell*>::iterator ite = this->spellbook.end();
        for (std::vector<ASpell*>::iterator it = this->spellbook.begin(); it != ite; it++){
            if ((*it)->getName() == aspell){
                delete *it;
                it = this->spellbook.erase(it);
            }
        }
}

ASpell* SpellBook::createSpell(const std::string &aspell){
    std::vector<ASpell*>::iterator ite = this->spellbook.end();
        for (std::vector<ASpell*>::iterator it = this->spellbook.begin(); it != ite; it++){
            if ((*it)->getName() == aspell){
                return (*it)->clone();
            }
        }
        return nullptr;
}