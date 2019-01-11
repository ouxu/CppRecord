//Point.h
#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point{
	public:
		Point(float=0,float=0);
		void setPoint(float,float);
		float getX()const {return x;}
		float getY()const {return y;}
		friend ostream & operator<<(ostream&,const Point &);
	
	protected:
	float x,y;		
};
#endif

