#ifndef ENCHANT_H
#define ENCHANT_H

#include "magic.h"

namespace RglkDef {

    class Enchant : public Magic {
        public:
            Enchant(int magnitude, int enc_size) :
                Magic(magnitude), m_encSize(enc_size) {
            };
            virtual ~Enchant() {};

            virtual void apply() = 0;

            inline virtual int getEncSize() const    { return m_encSize; };
            inline virtual void setEncSize(int size) { m_encSize = size; };
        private:
            int m_encSize;
    };

}

#endif // ENCHANT_H
