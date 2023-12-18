#ifndef OPERATIUNI_H
#define OPERATIUNI_H


abstract class Operatiuni
{
    public:
        Operatiuni();
        virtual ~Operatiuni();

        float Getsuma() { return suma; }
        float Getdobanda() { return dobanda; }

    protected:

    private:
        float suma;
        float dobanda;
};

#endif // OPERATIUNI_H
