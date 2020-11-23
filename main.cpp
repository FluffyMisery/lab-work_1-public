#include <iostream>
#include "Grass.hpp"
#include "Water.hpp"
#include "Pokemon.hpp"
#include "Fire.hpp"
#include <fstream>

int main() {
    
    Grass grass;
    grass.setPokClass("Grass");
    grass.setPokName("Bulbasaur");
    grass.setPokHP(34);
    grass.setPokAttack(304);
    grass.setPokSpeed(45);
    grass.setPokDefense(34);
    grass.setGrassSAttack(23);
    grass.setGrassSDefense(76);
    grass.print();
    
    Water water;
    water.setPokClass("Water");
    water.setPokName("Squirtle");
    water.setPokHP(100);
    water.setPokAttack(36);
    water.setPokSpeed(65);
    water.setPokDefense(45);
    water.setWaterSAttack(98);
    water.setWaterSDefense(54);
    water.print();

    Fire fire;
    fire.setPokClass("Fire");
    fire.setPokName("Charmander");
    fire.setPokHP(345);
    fire.setPokAttack(543);
    fire.setPokSpeed(555);
    fire.setPokDefense(43);
    fire.setFireSAttack(56);
    fire.setFireSDefense(132);
    fire.print();

std::ofstream myfile;
    myfile.open ("D:\\Pokemons.txt");
    if(myfile.is_open()) {
        myfile << "Pokemon's description: \n\n";
        myfile << " Name:\"" << grass.getPokName() << "\"";
        myfile << "\n Class:\"" << grass.getPokClass() << "\"";
        myfile << "\n HP:" << grass.getPokHP();
        myfile << "\n Attack:" << grass.getPokAttack();
        myfile << "\n Defense:"<< grass.getPokDefense();
        myfile << "\n Speed:"<< grass.getPokSpeed();
        myfile << "\n Special Attack:" << grass.getGrassSAttack();
        myfile << "\n Special Defense:" << grass.getGrassSDefense();
        myfile << "\n\n";

        myfile << " Name:\"" << water.getPokName() << "\"";
        myfile << "\n Class:\"" << water.getPokClass() << "\"";
        myfile << "\n HP:" << water.getPokHP();
        myfile << "\n Attack:" << water.getPokAttack();
        myfile << "\n Defense:"<< water.getPokDefense();
        myfile << "\n Speed:"<< water.getPokSpeed();
        myfile << "\n Special Attack:" << water.getWaterSAttack();
        myfile << "\n Special Defense:" << water.getWaterSDefense();
        myfile << "\n\n";
        
        myfile << " Name:\"" << fire.getPokName() << "\"";
        myfile << "\n Class:\"" << fire.getPokClass() << "\"";
        myfile << "\n HP:" << fire.getPokHP();
        myfile << "\n Attack:" << fire.getPokAttack();
        myfile << "\n Defense:"<< fire.getPokDefense();
        myfile << "\n Speed:"<< fire.getPokSpeed();
        myfile << "\n Special Attack:" << fire.getFireSAttack();
        myfile << "\n Special Defense:" << fire.getFireSDefense();
        myfile << "\n\n";
        myfile.close();
    }
    else std::cout << "Unable to open file";

    return 0;
}