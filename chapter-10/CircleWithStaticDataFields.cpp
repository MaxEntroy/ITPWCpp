#include "CircleWithStaticDataFields.h"
#include <cmath>
int Circle::get_number_of_objects(){ // ���ⶨ�徲̬��Ա����������ʹ��static
	return Circle::number_of_objects;
}
double Circle::init_pi(){
	return std::atan(1.0)*4;
}

int Circle::number_of_objects = 0;
double Circle::PI = Circle::init_pi(); // ��Ȼinit_pi()��˽�к�����Ҳ��������ʼ����̬��Ա���Ͼ������������������

double Circle::get_area() const{
	return Circle::PI * radius_ * radius_;
}