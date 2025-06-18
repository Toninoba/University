// In Teamarbeit von Christoph Petsch, Tobias Petsch

#include "scopetimer.hpp"
#include <iostream>

static size_t instance = 0;

ScopeTimer::ScopeTimer(const char* name) {
    if(name == nullptr){
        this->name = "unnamed";
    }
    else {
        this->name = name;
    }

    startTime = std::clock();
    for (size_t i = 0; i < instance; i++)
    {
        std::cout << "   ";
    }
    
    std::cout << "Starting " << name << " Timer" << std::endl;
    instance++;
}

ScopeTimer::~ScopeTimer(){
    instance--;
    for (size_t i = 0; i < instance; i++)
    {
        std::cout << "   ";
    }
    std::cout << "Timer " << name << " took " << (std::clock() - startTime) / 1000 << " miliseconds" << std::endl;    
    
}
