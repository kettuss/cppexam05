#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::~ASpell(){}

ASpell::ASpell(std::string const &name, std::string const &effects){
    this->name=name;
    this->effects=effects;
}
const std::string& ASpell::getName() const {
    return(name);
}

const std::string& ASpell::getEffects() const {
    return(effects);
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}

ASpell::ASpell(const ASpell &other){
    name = other.name;
    effects = other.effects;
}

ASpell &ASpell::operator=(const ASpell &other){
    name = other.name;
    effects = other.effects;
    return *this;
}