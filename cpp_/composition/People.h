#ifndef PEOPLE_H_
#define PEOPLE_H_
#include "Birthday.h"
#include <string>

class People{

    public:
        People(std::string name, Birthday bd);
        void printInfo();
    private:
        std::string name;
        Birthday bd;

};

#endif
