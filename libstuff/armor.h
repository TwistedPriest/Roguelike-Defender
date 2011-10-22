#ifndef ARMOR_H
#define ARMOR_H

namespace RglkDef {

    typedef enum {  CHAR_HEAD, CHAR_CHEST, CHAR_HANDS,
                    CHAR_LEFT_FINGER, CHAR_RIGHT_FINGER,
                    CHAR_LEGS, CHAR_FEET
    } ArmorLocation;

    class Armor : public Equipment {
        public:
            Armor(std::string name, int wgt, int con, ArmorLocation &loc) :
                Equipment(name, wgt, con), m_location(loc) {
            };

            inline ArmorLocation &getEquippableLocation() const         { return m_location; };
            inline void setEquippableLocation(const ArmorLocation &loc) { m_location = loc; };

        private:
            ArmorLocation &m_location;
    };

}

#endif // ARMOR_H
