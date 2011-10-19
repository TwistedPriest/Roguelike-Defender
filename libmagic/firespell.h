#ifndef FIRESPELL_H
#define FIRESPELL_H

#include "spell.h"

namespace RglkDef {

    class FireSpell : public Spell {
        public:
            FireSpell(int duration, int area, int cost) :
                Spell(duration, area, cost) {
            };

            void apply();
    };

}

#endif // FIRESPELL_H
