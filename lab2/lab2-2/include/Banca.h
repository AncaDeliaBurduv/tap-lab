#ifndef BANCA_H
#define BANCA_H


class Banca
{
    public:
        Banca();
        ~Banca();
        Banca(const Banca& other);
        Banca& operator=(const Banca& other);

        string GetcodBanca() { return codBanca; }
        void SetcodBanca(string val) { codBanca = val; }
        unsigned Getnrclienti() { return nrclienti; }
        void Setnrclienti(unsigned val) { nrclienti = val; }
        Client** Getclienti() { return clienti; }

    protected:

    private:
        string codBanca;
        unsigned nrclienti;
        Client** clienti;
};

#endif // BANCA_H
