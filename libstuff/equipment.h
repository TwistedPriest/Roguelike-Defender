#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <vector>
#include <string>

namespace RglkDef {
    class Enchant;

    class Equipment {
        public:
            Equipment(std::string name, int wgt, int con) :
                m_name(name), m_weight(wgt),
                m_condition(con), m_maxCondition(con),
                m_isEnchanted(false) {
                    m_enchants = std::vector< Enchant* >();
            };

            virtual ~Equipment() {};

            inline virtual int getWeight() const        { return m_weight; };
            inline virtual int getCondition() const     { return m_condition; };
            inline virtual int getMaxCondition() const  { return m_maxCondition; };
            inline virtual bool isEnchanted() const     { return m_isEnchanted; };

            inline virtual void setCondition(int con)   { m_condition = con; };

            virtual void addEnchantment(Enchant *) = 0;

        private:
            std::string m_name;
            int m_weight;
            int m_condition, m_maxCondition;
            bool m_isEnchanted;

            std::vector< Enchant* > m_enchants;
    };

}

#endif // EQUIPMENT_H
