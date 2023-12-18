#ifndef CLIENT_H
#define CLIENT_H


class Client
{
    public:
        Client();
        ~Client();
        Client(const Client& other);
        Client& operator=(const Client& other);

        string Getnume() { return nume; }
        void Setnume(string val) { nume = val; }
        string Getprenume() { return prenume; }
        void Setprenume(string val) { prenume = val; }
        string Getadresa() { return adresa; }
        void Setadresa(string val) { adresa = val; }
        unsigned Getnrconturi() { return nrconturi; }
        void Setnrconturi(unsigned val) { nrconturi = val; }
        ContBancar** Getconturi() { return conturi; }
        void Setconturi(ContBancar** val) { conturi = val; }

    protected:

    private:
        string nume;
        string prenume;
        string adresa;
        unsigned nrconturi;
        ContBancar** conturi;
};

#endif // CLIENT_H
