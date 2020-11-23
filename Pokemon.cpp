#include "Pokemon.hpp"
#include <iostream>

Pokemon::Pokemon() {

}
Pokemon::Pokemon(std::string l_pokClass, std::string l_pokName, int l_pokHP, int l_pokAttack, int l_pokDefense, int l_pokSpeed) {
   m_pokClass = l_pokClass;
    m_pokName = l_pokName;
    m_pokHP = l_pokHP;
    m_pokAttack = l_pokAttack;
    m_pokDefense = l_pokDefense;
    m_pokSpeed = l_pokSpeed;
}

Pokemon::~Pokemon() {

}

void Pokemon::setPokClass(std::string l_pokClass){
    m_pokClass = l_pokClass;
}

void Pokemon::setPokName(std::string l_pokName) {
    m_pokName = l_pokName;
}

void Pokemon::setPokHP(int l_pokHP) {
    m_pokHP = l_pokHP;
}

void Pokemon::setPokAttack(int l_pokAttack) {
    m_pokAttack = l_pokAttack;
}

void Pokemon::setPokDefense(int l_pokDefense) {
    m_pokDefense = l_pokDefense;
}

void Pokemon::setPokSpeed(int l_pokSpeed) {
    m_pokSpeed = l_pokSpeed;
}

void Pokemon::print() {
    if(m_pokClass.length()!=0){
        std::cout << "Pokemon class: " << m_pokClass << std::endl;
    }
    else std::cout << "Pokemon class has not found" << std::endl;

    if(m_pokName.length()!=0) {
        std::cout << "Pokemon name: " << m_pokName << std::endl;
    }
    else std::cout << "Pokemon name has not found" << std::endl;

    if(m_pokHP !=0) {
        std::cout << "Pokemon HP: " << m_pokHP << std::endl;
    }
    else std::cout << "Pokemon HP has not found" << std::endl;

    if(m_pokAttack !=0) {
        std::cout << "Pokemon attack:" << m_pokAttack << std::endl;
    }
    else std::cout << "Pokemon attack has not found" << m_pokAttack << std::endl;

    if(m_pokDefense !=0) {
        std::cout << "Pokemon defense: " << m_pokDefense << std::endl;
    }
    else std::cout << "Pokemon defense has not found" << m_pokDefense << std::endl;

    if(m_pokSpeed !=0) {
        std::cout << "Pokemon speed: " << m_pokSpeed << std::endl;
    }
    else std::cout << "Pokemon speed has not found" << m_pokSpeed << std::endl;
}