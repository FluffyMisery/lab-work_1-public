#pragma once
#include <string>

class Pokemon {
    private:
        std::string m_pokClass;
        std::string m_pokName;
        int m_pokHP;
        int m_pokAttack;
        int m_pokDefense;
        int m_pokSpeed;

    public:
        Pokemon();
        Pokemon(std::string m_pokClass, std::string l_pokName, int l_pokHP, int l_pokAttack, int l_pokDefense, int l_pokSpeed);
        ~Pokemon();
        
        void setPokClass(std::string l_pokClass);
        void setPokName(std::string l_pokName);
        void setPokHP(int l_pokHP);
        void setPokAttack(int l_pokAttack);
        void setPokDefense(int l_pokDefense);
        void setPokSpeed(int l_pokSpeed);

        std::string getPokClass() { return m_pokClass; };
        std::string getPokName() { return m_pokName; };
        int getPokHP() { return m_pokHP; };
        int getPokAttack() { return m_pokAttack; };
        int getPokDefense() { return m_pokDefense; };
        int getPokSpeed() { return m_pokSpeed; };

        void print();
}; 