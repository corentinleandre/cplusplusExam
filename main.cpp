#include <iostream>
#include "Animal.h"
#include "Mammal.h"

int main() {
    Animal flash = Animal("Flash", "black", "Carnivore", "Mountains", "Awoooo", false, 9, 9.9, 1.8);
    Mammal leo = Mammal("Leo", "Golden", "Carnivore", "Grassland", "Roar", false, 5, 180.5, 3.5,"Tawny");
    flash.printInfo();
    leo.printInfo();
    return 0;
}
