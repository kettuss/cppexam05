#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::~ATarget(){}

ATarget::ATarget(std::string const &type){
    this->type=type;
}
const std::string& ATarget::getType() const {
    return(type);
}

void ATarget::getHitBySpell(const ASpell &asPell) const {
    std::cout << this->type << " has been " << asPell.getEffects() << "!" << std::endl;
}

ATarget::ATarget(const ATarget &other){
    type = other.type;
}

ATarget &ATarget::operator=(const ATarget &other){
    type = other.type;
    return *this;
}