#include <iostream>
#include "Animal.h"
#include "Mammal.h"

int main() {
    Animal flash = Animal("Flash", "black", "Carnivore", "Mountains", "Awoooo", false, 9, 9.9, 1.8);
    Mammal leo = Mammal("Leo", "black", "Carnivore", "Mountains", "Awoooo", false, 9, 9.9, 1.8);
    flash.printInfo();
    return 0;
}
