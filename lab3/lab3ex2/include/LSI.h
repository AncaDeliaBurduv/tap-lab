#ifndef LSI_H
#define LSI_H
#include "Nod.h"


class LSI
{
    public:
        LSI(Nod* nod=nullptr);
        ~LSI();
        LSI(const LSI& other);
        void inserareInceput(int infoNou);
		void inserareSfarsit(int infoNou);
		void inserareInterior(int infoNou);
		void traversare();
		void stergereInceput();
		void stergereSfarsit();
		void stergereInterior();
		void init();
		Nod* cautare(int infoCautat);
		void actualizare(int infoCautat, int infoNou);

    private:
        Nod* top;
};

#endif // LSI_H
