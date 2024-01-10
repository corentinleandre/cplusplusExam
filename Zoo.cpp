//
// Created by coren on 10/01/2024.
//

#include "Zoo.h"
#include "Reptile.h"
#include "Mammal.h"
#include "Bird.h"
#include <iterator>

// Initialize static member
int Zoo::MAX_CAPACITY = 100;

Zoo::Zoo(const string& zooName) : name(zooName) {}

Zoo::Zoo(const Zoo& other) : name(other.name) {
    for (const auto& animal : other.animals) {
        animals.push_back(new Animal(*animal));
    }
}

string& Zoo::getName() const {
    return const_cast<string&>(name);
}

void Zoo::setName(const string& zooName) {
    name = zooName;
}

int Zoo::searchAnimalByName(const string& searchedName) {
    for(unsigned int i = 0; i < animals.size(); i++){
        if(animals[i]->getName() == searchedName){
            return int(i);
        }
    }
    return -1;
}

void Zoo::removeAnimalByName(const string& searchedName) {
    int index = searchAnimalByName(searchedName);
    if(index < 0){
        cout << "This animal cannot be found" << endl;
    }
    delete(animals[index]);
    animals.erase(animals.begin()+index);
}

void Zoo::addAnimal(const Animal & newAnimal) {

    int index = int(getAnimalNames().begin() - std::lower_bound(getAnimalNames().begin(), getAnimalNames().end(), newAnimal.getName()));
    animals.insert(animals.begin()+index, new Animal(newAnimal));
}

vector<string> Zoo::getAnimalNames() const{
    vector<string> vect;
    for(Animal* animal : animals){
        vect.push_back(animal->getName());
    }
    return vect;
}

void Zoo::listAnimals() const {
    for(Animal* animal : animals){
        animal->printInfo();
    }
}

double Zoo::averageForType(const string & animalType) {
    int type = 0;
    if(animalType == "Mammal"){ type = 1;}
    if(animalType == "Bird"){type = 2;}
    if(animalType == "Reptile"){type = 3;}
    int sum = 0;
    int cpt = 0;
    switch (type) {
        case 1:
            for(Animal* animal : animals){
                auto* mam = dynamic_cast<Mammal*>(animal);
                if(mam != nullptr){
                    sum+= mam->getAge();
                    cpt += 1;
                }
            }
            break;
        case 2:
            for(Animal* animal : animals){
                auto* bird = dynamic_cast<Bird*>(animal);
                if(bird != nullptr){
                    sum+= bird->getAge();
                    cpt += 1;
                }
            }
            break;
        case 3:
            for(Animal* animal : animals){
                auto* rep = dynamic_cast<Reptile*>(animal);
                if(rep != nullptr){
                    sum+= rep->getAge();
                    cpt += 1;
                }
            }
            break;
        default:
            return 0;
    }
    if(cpt != 0){
        return double(sum)/cpt;
    }
    return 0;
}






