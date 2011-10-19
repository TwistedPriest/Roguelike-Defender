#ifndef FIREENCHANT_H
#define FIREENCHANT_H

#include "enchant.h"

namespace RglkDef {

    class FireEnchant : public Enchant {
        public:
            FireEnchant(int magnitude, int encSize) :
                Enchant(magnitude, encSize) {
            };

            void apply();
    };

}

#endif // FIREENCHANT_H
