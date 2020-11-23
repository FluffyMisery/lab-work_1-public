#pragma once
#include "Pokemon.hpp"

class Water : public Pokemon {
    public: 
        void setWaterSAttack(int l_waterAttack);
        int getWaterSAttack() { return m_waterSAttack; }

        void setWaterSDefense(int l_waterSDefense);
        int getWaterSDefense() { return m_waterSDefense; }
        void print();

    private:
        int m_waterSAttack;
        int m_waterSDefense;

};