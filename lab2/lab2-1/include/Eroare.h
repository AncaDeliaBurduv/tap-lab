#ifndef EROARE_H
#define EROARE_H
#include <string>

using namespace std;

class Eroare
{
    public:
        Eroare(string msg="");

        void errprint();

    private:
        string msg;
};

#endif // EROARE_H
