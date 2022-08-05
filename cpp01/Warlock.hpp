#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class ASpell;

class Warlock{

    private:
    std::string name;
    std::string title; 
    std::vector<ASpell*> spellbook;

    Warlock();
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &other);

    public:
    Warlock (std::string const &name, std::string const &title);
    virtual ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(std::string const &title);

    void introduce() const;
    void learnSpell(const ASpell * aspell);
    void forgetSpell(std::string aspell);
    void launchSpell(std::string spellname, const ATarget& target);
    };