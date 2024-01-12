#ifndef ISOSCEL_H
#define ISOSCEL_H

#include <Triunghi.h>

class Isoscel : public Triunghi {
	public :
		Isoscel(double a = 0, double b = 0, double c = 0);
		Isoscel(const Isoscel&);
		~Isoscel();
		void arie() override;
		void perimetru() override;

};

#endif // ISOSCEL_H
