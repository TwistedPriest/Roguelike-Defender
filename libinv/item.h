#ifndef ITEM_H
#define ITEM_H

namespace RglkDef {

class Item {
    public:
        virtual Item() = 0;

        virtual int getWeight() const = 0;
        virtual int getValue()  const = 0;

        virtual void setWeight(int)   = 0;
        virtual void setValue(int)    = 0;

    private:
        double m_weight;
        double m_value;
};

}

#endif // ITEM_H
