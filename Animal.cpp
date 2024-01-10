//
// Created by coren on 10/01/2024.
//

#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string &animalName, const std::string &animalColor, const std::string &animalDiet,
               const std::string &animalHabitat, const std::string &animalSounds, bool animalIsPet, int animalAge,
               double animalWeight, double animalHeight)
        : name(animalName), color(animalColor), diet(animalDiet), habitat(animalHabitat),
          sounds(animalSounds), isPet(animalIsPet), age(animalAge),
          weight(animalWeight), height(animalHeight) {};

Animal::Animal(const Animal &other): name(other.name), color(other.color), diet(other.diet),
                                     habitat(other.habitat), sounds(other.sounds), isPet(other.isPet),
                                     age(other.age), weight(other.weight), height(other.height) {};

// Getters
string Animal::getName() const {
    return name;
}

string Animal::getColor() const {
    return color;
}

string Animal::getDiet() const {
    return diet;
}

string Animal::getHabitat() const {
    return habitat;
}

string Animal::getSounds() const {
    return sounds;
}

bool Animal::getIsPet() const {
    return isPet;
}

int Animal::getAge() const {
    return age;
}

double Animal::getWeight() const {
    return weight;
}

double Animal::getHeight() const {
    return height;
}

// Setters
void Animal::setName(const string& newName) {
    name = newName;
}

void Animal::setColor(const string& newColor) {
    color = newColor;
}

void Animal::setDiet(const string& newDiet) {
    diet = newDiet;
}

void Animal::setHabitat(const string& newHabitat) {
    habitat = newHabitat;
}

void Animal::setSounds(const string& newSounds) {
    sounds = newSounds;
}

void Animal::setIsPet(bool newIsPet) {
    isPet = newIsPet;
}

void Animal::setAge(int newAge) {
    age = newAge;
}

void Animal::setWeight(double newWeight) {
    weight = newWeight;
}

void Animal::setHeight(double newHeight) {
    height = newHeight;
}

void Animal::make_sound() {
    cout << sounds << endl;
}

void Animal::printInfo() {
    cout << "Animal of unknown type" << endl;
    cout << "Name : " << getName() << endl;
    cout << "Color : " << getColor() << endl;
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
