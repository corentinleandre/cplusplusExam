//
// Created by coren on 10/01/2024.
//

#ifndef CPLUSPLUSEXAM_ANIMAL_H
#define CPLUSPLUSEXAM_ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal{
private:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:
    Animal() = default;
    Animal(const string& animalName, const string& animalColor, const string& animalDiet,
           const string& animalHabitat, const string& animalSounds, bool animalIsPet,
           int animalAge, double animalWeight, double animalHeight);
    Animal(const Animal& other);

    //functions
    void make_sound();
    virtual void printInfo();

    // Getters
    string getName() const;
    string getColor() const;
    string getDiet() const;
    string getHabitat() const;
    string getSounds() const;
    bool getIsPet() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

    // Setters
    void setName(const string& newName);
    void setColor(const string& newColor);
    void setDiet(const string& newDiet);
    void setHabitat(const string& newHabitat);
    void setSounds(const string& newSounds);
    void setIsPet(bool newIsPet);
    void setAge(int newAge);
    void setWeight(double newWeight);
    void setHeight(double newHeight);

};

#endif //CPLUSPLUSEXAM_ANIMAL_H
