#ifndef FIGHTER_H
#define FIGHTER_H

#include "character.h"

namespace RglkDef {

    class Fighter : public Character {
        public:
            Fighter(int level, int gold, int health, int atk, int def) :
                Character(level, gold, health),
                m_attack(atk), m_defense(def) {
            };

            inline virtual int getAttack() const    { return m_attack; };
            inline virtual int getDefense() const   { return m_defense; };

            inline virtual void setAttack(int atk)  { m_attack = atk; };
            inline virtual void setDefense(int def) { m_defense = def; };

        private:
            int m_attack, m_defense;

    };

}

#endif // FIGHTER_H
