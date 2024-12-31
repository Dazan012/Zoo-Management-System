#include <iostream>
#include <vector>
#include <string>
class Animal
{
public:
    Animal(std::string name, std::string species) : name(name), species(species) {}
    void displayInfo()
    {
        std::cout << "Name: " << name << ", Species: " << species << std::endl;
    }

private:
    std::string name;
    std::string species;
};

class Zoo
{
public:
    void addAnimal(const Animal &animal)
    {
        animals.push_back(animal);
    }

    void displayAnimals()
    {
        for (const auto &animal : animals)
        {
            animal.displayInfo();
        }
    }

private:
    std::vector<Animal> animals;
};
