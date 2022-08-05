#pragma once
#include <iostream>
#include <string>

class ATarget;

class ASpell
{
private:
    std::string name;
    std::string effects;

public:
    ASpell();
    ASpell(std::string const &name, std::string const &effects);
    ASpell(const ASpell &other);
    ASpell &operator=(const ASpell &other);
    virtual ~ASpell();
    void launch(ATarget const &target) const;
    const std::string& getName() const;
    const std::string& getEffects() const;
    virtual ASpell* clone() const = 0;
};

#include "ATarget.hpp"