#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator{

    private:
    std::vector<ATarget*> targetGenerator;

    TargetGenerator(const TargetGenerator &other);
    TargetGenerator &operator=(const TargetGenerator &other);

    public:
    TargetGenerator();
    virtual ~TargetGenerator();
    void learnTargetType(const ATarget * aTarget);
    void forgetTarget(const std::string &aTarget);
    ATarget* createTarget(const std::string &aTarget);
    };