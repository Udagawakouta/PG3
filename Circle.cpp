#include "Circle.h"
#include <stdio.h>

Circle::Circle()
{
	radius_ = 20;
	printf("‰~‚Ìî•ñ\n");
	printf("”¼Œa:%d\n\n", radius_);
}

Circle::~Circle()
{

}

void Circle::Size()
{
	// ‰~ü—¦
	const float PI = 3.14f;
	// –ÊÏ‚ğ‹‚ß‚é
	Result_ = radius_ * radius_ * PI;

	printf("‰~‚Ì–ÊÏ‚ğŒvZ\n");
	printf("®:%d*%d*3.14\n", radius_, radius_);
}

void Circle::Draw()
{
	printf("‰~‚Ì–ÊÏ‚Í%2f\n\n", Result_);
}
