#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

namespace RglkDef {

    class Enemy : public Character {
        public:
            Enemy(int level, int gold, int health, int maxHealth) :
                Character(level, gold, health, maxHealth) {
                    m_inventory = std::vector< Equipment* >();
            };
    };

}

#endif // ENEMY_H
