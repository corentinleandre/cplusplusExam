//
// Created by coren on 10/01/2024.
//

#include "Bird.h"
#include <iostream>

double Bird::getWingspan() const {
    return wingspan;
}

void Bird::setWingspan(double newWingspan) {
    wingspan = newWingspan;
}

void Bird::printInfo() {
    cout << "Animal of type Bird" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Wingspan: " << getWingspan() << " cm" << endl;
    cout << "Diet: " << getDiet() << endl;
    cout << "Habitat: " << getHabitat() << endl;
    cout << "Age: " << getAge() << " years old" << endl;
    if (getIsPet()) {
        cout << "This bird is a pet" << endl;
    } else {
        cout << "This bird is not a pet" << endl;
    }
    cout << "Weight: " << getWeight() << " kg" << endl;
    cout << "Height: " << getHeight() << " cm" << endl;
}

Bird::Bird(const string &animalName, const string &animalColor, const string &animalDiet,
           const string &animalHabitat, const string &animalSounds, bool animalIsPet,
           int animalAge, double animalWeight, double animalHeight, double birdWingspan)
        : Animal(animalName, animalColor, animalDiet, animalHabitat, animalSounds,
                 animalIsPet, animalAge, animalWeight, animalHeight),
          wingspan(birdWingspan) {
}

Bird::Bird(const Bird &other)
        : Animal(other), wingspan(other.wingspan) {
}
