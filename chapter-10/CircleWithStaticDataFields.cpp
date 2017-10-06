#include "CircleWithStaticDataFields.h"
#include <cmath>
int Circle::get_number_of_objects(){ // 类外定义静态成员函数，不能使用static
	return Circle::number_of_objects;
}
double Circle::init_pi(){
	return std::atan(1.0)*4;
}

int Circle::number_of_objects = 0;
double Circle::PI = Circle::init_pi(); // 虽然init_pi()是私有函数，也可用来初始化静态成员。毕竟还是在类的作用域内

double Circle::get_area() const{
	return Circle::PI * radius_ * radius_;
}