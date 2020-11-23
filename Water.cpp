#include "Water.hpp"
#include <iostream>

void Water::setWaterSAttack(int l_waterSAttack) {
   m_waterSAttack = l_waterSAttack;
}

void Water::setWaterSDefense(int l_waterSDefense) {
    m_waterSDefense = l_waterSDefense;
}

void Water::print() {

    std::string m_pokClass = getPokClass();
    if (m_pokClass.length()!=0) {
        std::cout << std::endl << "Pokemon class: " << m_pokClass << std::endl;
    }
    else std::cout << "Pokemon class has not found" << std::endl;
    
    std::string m_pokName = getPokName();
    if(m_pokName.length()!=0) {
        std::cout << "Pokemon name: " << m_pokName << std::endl;
    }
    else std::cout << "Pokemon name has not found" << std::endl;

    int m_pokHP = getPokHP();
    if(m_pokHP !=0) {
        std::cout << "Pokemon HP: " << m_pokHP << std::endl;
    }
    else std::cout << "Pokemon HP has not found" << std::endl;

    int m_pokAttack = getPokAttack();
    if(m_pokAttack !=0) {
        std::cout << "Pokemon attack:" << m_pokAttack << std::endl;
    }
    else std::cout << "Pokemon attack has not found" << m_pokAttack << std::endl;

    int m_pokDefense = getPokDefense();
    if(m_pokDefense !=0) {
        std::cout << "Pokemon defense: " << m_pokDefense << std::endl;
    }
    else std::cout << "Pokemon defense has not found" << m_pokDefense << std::endl;

    int m_pokSpeed = getPokSpeed();
    if(m_pokSpeed !=0) {
        std::cout << "Pokemon speed: " << m_pokSpeed << std::endl;
    }
    else std::cout << "Pokemon speed has not found" << m_pokSpeed << std::endl;

    int m_waterSAttack = getWaterSAttack();
    if(m_waterSAttack !=0) {
        std::cout << "Pokemon special attack: " << m_waterSAttack << std::endl;
    }
    else std::cout << "Pokemon special attack has not found" << m_waterSAttack << std::endl;

    int m_waterSDefense =getWaterSDefense();
    if (m_waterSDefense !=0) {
       std::cout << "Pokemon special defense: " << m_waterSDefense << std::endl;
    }
    else  std::cout << "Pokemon special defense has not found" << m_waterSDefense << std::endl << std::endl;
};
