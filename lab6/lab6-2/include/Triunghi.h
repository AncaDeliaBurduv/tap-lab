#ifndef TRIUNGHI_H
#define TRIUNGHI_H


class Triunghi {
	public :
		Triunghi(double a = 0, double b = 0, double c = 0);
		double a;
		double b;
		double c;
		virtual void arie() = 0;
		virtual void perimetru() = 0;
};

#endif // TRIUNGHI_H
