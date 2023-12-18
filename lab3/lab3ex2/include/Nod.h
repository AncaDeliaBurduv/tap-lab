#ifndef NOD_H
#define NOD_H


class Nod
{
    public:
        Nod(int info=0, Nod* succ=nullptr);
        ~Nod();
        Nod(const Nod& other);

    protected:

    private:
        int info;
        Nod* succ;
};

#endif // NOD_H
