#ifndef MATH_HPP_
#define MATH_HPP_

class Vec{
	public:
		double x, y, z;
		Vec(double x, double y, double z);
		Vec(double x, double y);
	
		/* redefinition methods*/
		void operator += (const Vec& v);
        void operator -= (const Vec& v);
        void operator *= (float a);
		void operator /= (float a);
		double operator () (int i);
		Vec& operator -();
		Vec& operator !();
		bool operator == (const Vec& a);
		Vec& operator + (const Vec& a);
		Vec& operator - (const Vec& a);
		Vec& operator * (float k);
		Vec& operator / (float k);

		/* methods*/
		Vec normalize();
		Vec norm();
		Vec distance(Vec& a);

		virtual ~Vec();		
}

#endif /*MATH_HPP_*/