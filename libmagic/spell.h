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

            inline virtual int getDuration()        const { return m_duration; };
            inline virtual int getAreaOfEffect()    const { return m_effectArea; };
            inline virtual int getCastCost()        const { return m_castCost; };

            inline virtual void setDuration(int dur)      { m_duration = dur; };
            inline virtual void setAreaOfEffect(int area) { m_effectArea = area; };
            inline virtual void setCastCost(int cost)     { m_castCost = cost; };

            virtual void apply() = 0;

        private:
            int m_duration;
            int m_effectArea;
            int m_castCost;
    };
}

#endif // SPELL_H
