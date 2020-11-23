#pragma once
#include "Pokemon.hpp"

class Fire : public Pokemon {
    public:
        void setFireSAttack (int l_fireSAttack);
        int getFireSAttack() { return m_fireSAttack; };

        void setFireSDefense (int l_fireSDefense);
        int getFireSDefense() { return m_fireSDefense; };
        void print();

    private:
        int m_fireSAttack;
        int m_fireSDefense;

};