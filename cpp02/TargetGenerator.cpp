#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator (){}

TargetGenerator::~TargetGenerator(){
}

void TargetGenerator::learnTargetType(const ATarget * aTarget){
    if (aTarget){
        std::vector<ATarget*>::iterator ite = this->targetGenerator.end();
        for (std::vector<ATarget*>::iterator it = this->targetGenerator.begin(); it != ite; it++){
            if ((*it)->getType() == aTarget->getType()){
                return;
            }
        }
        this->targetGenerator.push_back(aTarget->clone());
    }
}

void TargetGenerator::forgetTarget(const std::string &aTarget){  
        std::vector<ATarget*>::iterator ite = this->targetGenerator.end();
        for (std::vector<ATarget*>::iterator it = this->targetGenerator.begin(); it != ite; it++){
            if ((*it)->getType() == aTarget){
                delete *it;
                it = this->targetGenerator.erase(it);
            }
        }
}

ATarget* TargetGenerator::createTarget(const std::string &aTarget){
    std::vector<ATarget*>::iterator ite = this->targetGenerator.end();
        for (std::vector<ATarget*>::iterator it = this->targetGenerator.begin(); it != ite; it++){
            if ((*it)->getType() == aTarget){
                return (*it)->clone();
            }
        }
        return nullptr;
}