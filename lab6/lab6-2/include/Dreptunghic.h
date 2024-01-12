#ifndef DREPTUNGHIC_H
#define DREPTUNGHIC_H

#include <Triunghi.h>

class Dreptunghic : public Triunghi
{
	public :
		Dreptunghic(double c1 = 0, double c2 = 0, double i = 0);
		Dreptunghic(const Dreptunghic&);
		~Dreptunghic();
		void arie() override;
		void perimetru() override;
};

#endif // DREPTUNGHIC_H
