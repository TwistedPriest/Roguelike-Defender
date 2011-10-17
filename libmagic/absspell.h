#ifndef ABSSPELL_H
#define ABSSPELL_H

#include "spell.h"

namespace RglkDef {

class AbsSpell : public Spell {
    public:
        AbsSpell(int duration, int area, int cost) :
            Spell(duration, area, cost) {
        };

        void apply();
};

}

#endif // ABSSPELL_H
