//
// Created by coren on 10/01/2024.
//

#ifndef CPLUSPLUSEXAM_ZOO_H
#define CPLUSPLUSEXAM_ZOO_H

#include <string>
#include "Animal.h"
#include <vector>

using namespace std;

class Zoo{
public:
    Zoo() = default;
    Zoo(const string&);
    Zoo(const Zoo&);
    string& getName() const;
    void setName(const string&);
    int searchAnimalByName(const string&);
    void removeAnimalByName(const string&);
    void addAnimal(const Animal&);
    void listAnimals() const;
    double averageForType(const string&);
private:
    string name;
    static int MAX_CAPACITY;
    vector<Animal*> animals;

    vector<string> getAnimalNames() const;
};

#endif //CPLUSPLUSEXAM_ZOO_H
