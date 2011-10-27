#ifndef ENEMY_H
#define ENEMY_H

#include "fighter.h"
#include "drop.h"

namespace RglkDef {

    class Enemy : public Fighter {
        public:
            Enemy(int level, int gold, int health, int maxHealth) :
                Fighter(level, gold, health, maxHealth) {
                    m_inventory = std::vector< Equipment* >();
            };

            void drop();

        private:
            Drop &m_drop;
    };

}

#endif // ENEMY_H
