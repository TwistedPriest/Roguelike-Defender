#ifndef ABSENCHANT_H
#define ABSENCHANT_H

namespace RglkDef {

    class AbsEnchant : public Enchant {
        public:
            AbsEnchant(int mag, int encSize) :
                Enchant(mag, encSize) {
            };
            virtual ~AbsEnchant() {};

            void apply();
    };

}

#endif // ABSENCHANT_H
