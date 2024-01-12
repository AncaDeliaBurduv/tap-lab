#ifndef FRACTIE_H
#define FRACTIE_H
#include<iostream>

using namespace std;

class Fractie
{
    public:
        Fractie(int numarator=0, int numitor=1);
        ~Fractie();
        Fractie(const Fractie& other);

        Fractie& operator=(const Fractie&);

        int numarator;
        int numitor;

        inline int Getnumitor() const {return numitor;}
        inline int Getnumarator() const {return numarator;}
        inline void Setnumitor(int numitor) {numitor = numitor;}
        inline void Setnumarator(int numarator) {numarator = numarator;}

        static int cmmdc(int,int);
        Fractie simplifica();
        Fractie reciproc();

        Fractie operator+(const Fractie&) const;
        //friend Fractie operator+(const Fractie&, const Fractie&);
        Fractie operator-(const Fractie&) const;
        //friend Fractie operator-(const Fractie&, const Fractie&);
        Fractie operator*(const Fractie&) const;
        //friend Fractie operator*(const Fractie&, const Fractie&);
        Fractie operator/(const Fractie&) const;
        //friend Fractie operator/(const Fractie&, const Fractie&);

        bool operator<(const Fractie&) const;
        //friend bool operator<(const Fractie&, const Fractie&);
        bool operator>(const Fractie&) const;
        //friend bool operator>(const Fractie&, const Fractie&);
        bool operator<=(const Fractie&) const;
        //friend bool operator<=(const Fractie&, const Fractie&);
        bool operator>=(const Fractie&) const;
        //friend bool operator>=(const Fractie&, const Fractie&);
        bool operator!=(const Fractie&) const;
        //friend bool operator!=(const Fractie&, const Fractie&);
        bool operator==(const Fractie&) const;
        //friend bool operator==(const Fractie&, const Fractie&);

        Fractie& operator+=(const Fractie&);
        Fractie& operator-=(const Fractie&);
        Fractie& operator*=(const Fractie&);
        Fractie& operator/=(const Fractie&);

        Fractie& operator++();
        Fractie operator++(int dummy);
        Fractie& operator--();
        Fractie operator--(int dummy);

        ostream& operator<<(ostream& o) const;
        //friend ostream& operator<<(ostream&, const Fractie&);
        istream& operator>>(istream& i);
        //friend istream& operator>>(istream&, const Fractie&);

        operator double();
};

#endif // FRACTIE_H
