#ifndef LSI_H
#define LSI_H
#include "Nod.h"


class LSI
{
    public:
        LSI(Nod* nod=nullptr);
        ~LSI();
        LSI(const LSI& other);

    protected:

    private:
        Nod* nod;
};

#endif // LSI_H
