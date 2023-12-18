#pragma once
#ifndef DREAPTA_H
#define DREAPTA_H


class Dreapta
{
    public:
        Dreapta(float panta=1, float ordonata=0);
        Dreapta(const Dreapta& d);
        ~Dreapta();
        inline float getM(){return m;}
        inline float getN(){return n;}
    private:
        float m;
        float n;
};

#endif // DREAPTA_H
