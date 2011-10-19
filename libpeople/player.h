#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "character.h"
#include "equipment.h"
#include "spell.h"

namespace RglkDef {

    class Player : public Character {
        public:
            Player(int level, int gold, std::string name, int str, int end) :
                Character(level, gold), m_inventory(std::vector< Equipment* >()),
                m_spells(std::vector< Spell* >()), m_name(name) {
                    m_maxMagicka = (m_endurance + (m_level * m_level));
                    m_magicka = m_maxMagicka;
            };
            ~Player();

            void addItem(Equipment *);
            void addSpell(Spell *);

            Equipment *removeItem(int);
            Spell *removeSpell(int);

            inline int getStrength() const      { return m_strength; };
            inline int getEndurance() const     { return m_endurance; };
            inline void setStrength(int str)    { m_strength = str; };
            inline void setEndurance(int end)   { m_endurance = end; };

            inline int getMagicka() const       { return m_magicka; };
            inline int getMaxMagicka() const    { return (m_endurance + (m_level * m_level)); };

            void addLevel();

        private:
            std::vector< Equipment* > m_inventory;
            std::vector< Spell* > m_spells;
            std::string m_name;

            int m_strength, m_endurance;
            int m_magicka, m_maxMagicka;

    };

}

#endif // PLAYER_H
