//
// Created by coren on 10/01/2024.
//

#ifndef CPLUSPLUSEXAM_BIRD_H
#define CPLUSPLUSEXAM_BIRD_H

#include "Animal.h"

class Bird : public Animal {
private:
    double wingspan;

public:
    Bird() = default;

    // Constructor for Bird with parameters for both Bird and Animal attributes
    Bird(const string& animalName, const string& animalColor, const string& animalDiet,
         const string& animalHabitat, const string& animalSounds, bool animalIsPet,
         int animalAge, double animalWeight, double animalHeight, double birdWingspan);

    // Copy constructor for Bird
    Bird(const Bird& other);

    // Getter and setter for wingspan
    double getWingspan() const;

    void setWingspan(double newWingspan);
    void printInfo() override;
};

#endif //CPLUSPLUSEXAM_BIRD_H
