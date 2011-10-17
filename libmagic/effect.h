#ifndef EFFECT_H
#define EFFECT_H

namespace RglkDef {

enum {
    DAMAGE_HEALTH, // reduces enemy health
    DAMAGE_ARMOR,  // reduces enemy armor rating
    DAMAGE_WEAPON, // reduces enemy attack rating
    ABSORB_HEALTH, // damages enemy health while restoring your own by the same magnitude
    ABSORB_MAGIC,  // restores caster health from enemy magical attacks
    FIRE_DAMAGE,   // fire damage
    ICE_DAMAGE,    // ice damage
    SHOCK_DAMAGE,  // shock damage
    HEAL_SELF,     // heals caster
    HEAL_ALLY      // heals ally characters
} SpellType;

class Character;   // forward declare characters so we can have magical targets
class Player;
class Enemy;

class Effect {
    public:

    private:
        int m_spellType;
        int m_magnitude;
        Character *m_target;
};

}

#endif // EFFECT_H
