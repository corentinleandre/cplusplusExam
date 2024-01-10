//
// Created by coren on 10/01/2024.
//

#include "Mammal.h"

string Mammal::getFurColor() const {
    return furColor;
}

void Mammal::setFurColor(const string &newFurColor)  {
    furColor = newFurColor;
}

void Mammal::printInfo() {
    cout << "Animal of type Mammal" << endl;
    cout << "Name : " << getName() << endl;
    cout << "Color : " << getColor() << endl;
    cout << "Fur Color : " << getFurColor() << endl;
    cout << "Diet : " << getDiet() << endl;
    cout << "Habitat : " << getHabitat() << endl;
    cout << "Age : " << getAge() << "'s old" << endl;
    if(getIsPet()){
        cout << "This animal is a pet" << endl;
    }else{
        cout << "This animal is not a pet" << endl;
    }
    cout << "Weight : " << getWeight() << "kg" << endl;
    cout << "Height : " << getHeight() << "cm" << endl;
}

Mammal::Mammal(const string &animalName, const string &animalColor, const string &animalDiet,
               const string &animalHabitat, const string &animalSounds, bool animalIsPet, int animalAge,
               double animalWeight, double animalHeight, const string &mammalFurColor)
                : Animal(animalName, animalColor, animalDiet, animalHabitat, animalSounds,
                         animalIsPet, animalAge, animalWeight, animalHeight),
                         furColor(mammalFurColor) {

}

Mammal::Mammal(const Mammal &other)
        : Animal(other), furColor(other.furColor) {
}
