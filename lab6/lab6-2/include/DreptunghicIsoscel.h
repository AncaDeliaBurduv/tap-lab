#ifndef DREPTUNGHICISOSCEL_H
#define DREPTUNGHICISOSCEL_H

#include <Dreptunghic.h>
#include <Isoscel.h>

class DreptunghicIsoscel : public Dreptunghic, public Isoscel {
	public:
		DreptunghicIsoscel(double a = 0, double b = 0, double c = 0);
		DreptunghicIsoscel(const DreptunghicIsoscel&);
		~DreptunghicIsoscel();
		void arie() override;
		void perimetru() override;
};

#endif // DREPTUNGHICISOSCEL_H
