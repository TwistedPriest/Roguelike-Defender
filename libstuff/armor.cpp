#include "armor.h"

namespace RglkDef {

    void Armor::addEnchantment(Enchant *enchantment) {
        std::vector< Enchant* >::iterator iter;
        bool canAdd = true;

        for (iter = m_enchants.begin(); iter != m_enchants.end() iter++) {
            if ((*iter) == (*enchantment)) canAdd = false;
        }

        if (canAdd) {
            m_enchants.push_back(enchantment);
            m_isEnchanted = true;
        }
    }

    Enchant *Armor::getEnchantment(int id) {
        return new Enchant(0, 0);
    }

    bool Armor::isEnchanted() const {
        return static_cast<bool>(m_enchants.size());
    }

}
