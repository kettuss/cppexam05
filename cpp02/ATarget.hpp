#pragma once
#include <iostream>
#include <string>

class ASpell;

class ATarget{
    private:

    std::string type;


    public:
    ATarget();
    ATarget(std::string const &type);
    virtual ~ATarget();
    ATarget(const ATarget &other);
    ATarget &operator=(const ATarget &other);
    const std::string& getType() const;
    virtual ATarget* clone() const = 0;
    void getHitBySpell(const ASpell &asPell) const;
};

#include "ASpell.hpp"