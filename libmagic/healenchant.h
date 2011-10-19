#ifndef HEALENCHANT_H
#define HEALENCHANT_H

namespace RglkDef {
    class HealEnchant : public Enchant {
        public:
            HealEnchant(int mag, int encSize) :
                Enchant(mag, encSize) {
            };

            void apply();
    };
}

#endif // HEALENCHANT_H
