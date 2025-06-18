#pragma once

#include <ctime> // Use the function std::clock() to measure time.

// The ScopeTimer measures the time between construction and
// destruction and writes it formatted with its name to the console.

/*
Die Invariante ist in unserer Implementierung, dass const char* name niemals ein nullptr ist und das startTime immer
initialisiert wird
*/


class ScopeTimer{
public: 
    // Define the constructor and destructor in scopetimer.cpp
    ScopeTimer(const char* name);
    ~ScopeTimer();
private:    
    // ToDo: Data members?
    std::clock_t startTime;
    const char* name;
};