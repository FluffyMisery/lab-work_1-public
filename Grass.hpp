#pragma once
#include "Pokemon.hpp"

class Grass : public Pokemon {
    public:
        void setGrassSAttack(int l_grassSAttack);
        int getGrassSAttack() { return m_grassSAttack; }

        void setGrassSDefense(int l_grassSDefense);
        int getGrassSDefense() { return m_grassSDefense; }
        void print();

    private:
        int m_grassSAttack;
        int m_grassSDefense;

};