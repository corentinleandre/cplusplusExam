//
// Created by coren on 10/01/2024.
//

#ifndef CPLUSPLUSEXAM_REPTILE_H
#define CPLUSPLUSEXAM_REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
private:
    string scalePattern;

public:
    Reptile() = default;

    // Constructor for Reptile with parameters for both Reptile and Animal attributes
    Reptile(const string& animalName, const string& animalColor, const string& animalDiet,
            const string& animalHabitat, const string& animalSounds, bool animalIsPet,
            int animalAge, double animalWeight, double animalHeight, const string& reptileScalePattern);

    // Copy constructor for Reptile
    Reptile(const Reptile& other);

    // Getter and setter for scalePattern
    string getScalePattern() const;

    void setScalePattern(const string& newScalePattern);
    void printInfo() override;
};

#endif //CPLUSPLUSEXAM_REPTILE_H
