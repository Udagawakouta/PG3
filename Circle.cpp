#include "Circle.h"
#include <stdio.h>

Circle::Circle()
{
	radius_ = 20;
	printf("�~�̏��\n");
	printf("���a:%d\n\n", radius_);
}

Circle::~Circle()
{

}

void Circle::Size()
{
	// �~����
	const float PI = 3.14f;
	// �ʐς����߂�
	Result_ = radius_ * radius_ * PI;

	printf("�~�̖ʐς��v�Z\n");
	printf("��:%d*%d*3.14\n", radius_, radius_);
}

void Circle::Draw()
{
	printf("�~�̖ʐς�%2f\n\n", Result_);
}
