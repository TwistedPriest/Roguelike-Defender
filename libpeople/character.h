#ifndef CHARACTER_H
#define CHARACTER_H

namespace RglkDef {

    class Character {
        public:
            Character(int level, int gold, int health) :
                m_level(level), m_gold(gold),
                m_health(health), m_maxHealth(health) {
            };
            virtual ~Character() {};

            inline virtual void setLevel(int level)     { m_level = level; };
            inline virtual void setGold(int gold)       { m_gold = gold; };
            inline virtual void setHealth(int heal)     { m_health = heal; };
            inline virtual void setMaxHealth(int heal)  { m_maxHealth = heal; };

            inline virtual int getLevel() const         { return m_level; };
            inline virtual int getGold() const          { return m_gold; };
            inline virtual int getHealth() const        { return m_health; };
            inline virtual int getMaxHealth() const     { return m_maxHealth; };

            inline virtual void addGold(int gold)       { m_gold += (gold < 0 ? -gold : gold); };
            inline virtual void addHealth(int health)   {
                m_health += (health > 0) ? health : -health;
                if (m_health > m_maxHealth) m_health = m_maxHealth;
            };

            inline virtual void addLevel() = 0; // everyone does it different

        private:
            int m_gold, m_level, m_health, m_maxHealth;
    };

}

#endif // CHARACTER_H
