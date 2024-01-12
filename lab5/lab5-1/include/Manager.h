#ifndef MANAGER_H
#define MANAGER_H

#include <Angajat.h>


class Manager : public Angajat
{
    public:
        Manager(double tarifOrar = 5.5, int nrOre=0, int nrSubord=0);
        ~Manager();
        Manager(const Manager&);
        Manager& operator=(const Manager&);

        double getSalar() const;

        ostream& operator<<(ostream&) const;
        istream& operator>>(istream&);

    private:
        int nrSubord;
};

#endif // MANAGER_H
