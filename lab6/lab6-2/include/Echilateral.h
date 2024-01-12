#ifndef ECHILATERAL_H
#define ECHILATERAL_H

#include <Isoscel.h>


class Echilateral : public Isoscel
{
    public:
		Echilateral(double a = 0);
		Echilateral(const Echilateral&);
		~Echilateral();
		void arie() override;
		void perimetru() override;
};

#endif // ECHILATERAL_H
