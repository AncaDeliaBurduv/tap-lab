#ifndef FRACTIE_H
#define FRACTIE_H


class Fractie
{
    public:
        Fractie(int numarator=0, int numitor=1);
        ~Fractie();
        Fractie(const Fractie& other);

        int Getnumarator() { return numarator; }
        void Setnumarator(int val) { numarator = val; }
        int Getnumitor() { return numitor; }
        void Setnumitor(int val) { numitor = val; }

        Fractie adunare(const Fractie&,const Fractie&);
        Fractie scadere(const Fractie&,const Fractie&);
        Fractie inmultire(const Fractie&,const Fractie&);
        Fractie impartire(const Fractie&,const Fractie&);

        static int cmmdc(int,int);

        Fractie simplifica();
        Fractie reciproc();
        bool egal(const Fractie&);
        void print();

    private:
        int numarator;
        int numitor;
};

#endif // FRACTIE_H
