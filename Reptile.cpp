//
// Created by coren on 10/01/2024.
//

#include "Reptile.h"
#include <iostream>

string Reptile::getScalePattern() const {
    return scalePattern;
}

void Reptile::setScalePattern(const string& newScalePattern) {
    scalePattern = newScalePattern;
}

void Reptile::printInfo() {
    std::cout << "Animal of type Reptile" << std::endl;
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Color: " << getColor() << std::endl;
    std::cout << "Scale Pattern: " << getScalePattern() << std::endl;
    std::cout << "Diet: " << getDiet() << std::endl;
    std::cout << "Habitat: " << getHabitat() << std::endl;
    std::cout << "Age: " << getAge() << " years old" << std::endl;
    if (getIsPet()) {
        std::cout << "This reptile is a pet" << std::endl;
    } else {
        std::cout << "This reptile is not a pet" << std::endl;
    }
    std::cout << "Weight: " << getWeight() << " kg" << std::endl;
    std::cout << "Height: " << getHeight() << " cm" << std::endl;
}

Reptile::Reptile(const string& animalName, const string& animalColor, const string& animalDiet,
                 const string& animalHabitat, const string& animalSounds, bool animalIsPet,
                 int animalAge, double animalWeight, double animalHeight, const string& reptileScalePattern)
        : Animal(animalName, animalColor, animalDiet, animalHabitat, animalSounds,
                 animalIsPet, animalAge, animalWeight, animalHeight),
          scalePattern(reptileScalePattern) {
}

Reptile::Reptile(const Reptile& other)
        : Animal(other), scalePattern(other.scalePattern) {
}

