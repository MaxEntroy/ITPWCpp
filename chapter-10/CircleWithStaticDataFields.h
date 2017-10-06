#ifndef CIRCLE_H
#define CIRCLE_H
#include <cstring>
class Circle{
public:
	Circle(){std::memset(this, 0, sizeof(Circle)); ++number_of_objects; }
	Circle( double r ) : radius_(r) { ++number_of_objects; }

	double get_radius() const { return radius_; }
	void set_radius( double r ) { radius_ = r; }

	double get_area() const;

public:
	static int get_number_of_objects();
private:
	static double init_pi();

private:
	double radius_;
private:
	static int number_of_objects;
	static double PI;
};

#endif