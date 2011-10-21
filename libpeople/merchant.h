#ifndef MERCHANT_H
#define MERCHANT_H

#include "merchant.h"

namespace RglkDef {

    class Merchant : public Character {
        public:
            Merchant(int level, int gold) :
                Character(level, gold, 0, 0) {
                    m_barterables = std::vector< Equipment* >();
            };

            virtual ~Merchant();

            int buy(Equipment const *); // pass a pointer to the item being sold, return the amount of gold it's worth times a percent
            Equipment *sell();          // return a pointer to the item being sold, add the amount of gold it's worth times a percent
            void transact();            // prints a transaction menu

        private:
            std::vector< Equipment* > m_barterables;
    };

}

#endif // MERCHANT_H
