#ifndef MAGIC_H
#define MAGIC_H

namespace RglkDef {

    class Magic {
        public:
            Magic(int mag) :
                m_magnitude(mag) {
            };
            virtual ~Magic() {};

            virtual void apply() = 0;

            inline virtual int getMagnitude() const   { return m_magnitude; };
            inline virtual void setMagnitude(int mag) { m_magnitude = mag;  };
        private:
            int m_magnitude;
    };

}

#endif // MAGIC_H
