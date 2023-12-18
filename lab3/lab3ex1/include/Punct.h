#ifndef PUNCT_H
#define PUNCT_H
#include "Dreapta.h"

class Punct
{
    public:
        static int cntSemiPoz;
        static int cntSemiNeg;
        static int cntDr;
        Punct(float x=0, float y=0);
        ~Punct();
        Punct(const Punct& other);
        friend float distanta(const Punct& p1, const Punct& p2);
        friend class Dreapta;
        static Dreapta d;
        inline float getX(){return x;}
        inline float getY(){return y;}

    private:
        float x;
        float y;
};

#endif // PUNCT_H
