#pragma once
#include <iostream>
#include <string>

class Warlock{

    private:
    std::string name;
    std::string title;

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
};