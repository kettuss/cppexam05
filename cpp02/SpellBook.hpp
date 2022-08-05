#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class ASpell;

class SpellBook{

    private:
    std::vector<ASpell*> spellbook;

    SpellBook(const SpellBook &other);
    SpellBook &operator=(const SpellBook &other);

    public:
    SpellBook();
    virtual ~SpellBook();
    void learnSpell(const ASpell * aspell);
    void forgetSpell(const std::string &aspell);
    ASpell* createSpell(const std::string &aspell);
    };