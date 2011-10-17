#ifndef SPELL_H
#define SPELL_H

#include "magic.h"

namespace RglkDef {

class Spell : public Magic {
    public:
        Spell(int duration, int area, int cost) :
            m_duration(duration),
            m_effectArea(area),
            m_castCost(cost) {
        };

        inline int getDuration()        const { return m_duration; };
        inline int getAreaOfEffect()    const { return m_effectArea; };
        inline int getCastCost()        const { return m_castCost; };

        inline void setDuration(int dur)      { m_duration = dur; };
        inline void setAreaOfEffect(int area) { m_effectArea = area; };
        inline void setCastCost(int cost)     { m_castCost = cost; };

    private:
        int m_duration;
        int m_effectArea;
        int m_castCost;
};

}

#endif // SPELL_H
