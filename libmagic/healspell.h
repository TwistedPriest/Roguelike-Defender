#ifndef HEALSPELL_H
#define HEALSPELL_H

#include "spell.h"

namespace RglkDef {

    class HealSpell : public Spell {
        public:
            HealSpell(int duration, int area, int cost) :
                Spell(duration, area, cost) {
            };

            void apply();
    };

}

#endif // HEALSPELL_H
