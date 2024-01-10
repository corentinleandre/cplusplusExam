//
// Created by coren on 10/01/2024.
//

#ifndef CPLUSPLUSEXAM_MAMMAL_H
#define CPLUSPLUSEXAM_MAMMAL_H

#include "Animal.h"

class Mammal: public Animal{
private:
    string furColor;

public:

    Mammal() = default;
    // Constructor for Mammal with parameters for both Mammal and Animal attributes
    Mammal(const string& animalName, const string& animalColor, const string& animalDiet,
           const string& animalHabitat, const string& animalSounds, bool animalIsPet,
           int animalAge, double animalWeight, double animalHeight, const string& mammalFurColor);
    // Copy constructor for Mammal
    Mammal(const Mammal& other);

    // Getter and setter for furColor
    string getFurColor() const;

    void setFurColor(const string& newFurColor);
    void printInfo() override;
};

#endif //CPLUSPLUSEXAM_MAMMAL_H
