#ifndef NOD_H
#define NOD_H


class Nod
{
    public:
        Nod(int info=0, Nod* succ=nullptr);
        ~Nod();
        Nod(const Nod& other);
        inline int getInfo() {return this->info;}
        inline Nod* getSucc() {return this->succ;}

    private:
        int info;
        Nod* succ;
		friend class LSI;
};

#endif // NOD_H
