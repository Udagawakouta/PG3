#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle()
{
	width_ = 20;
	height_ = 20;
	printf("��`�̏��\n");
	printf("�c:%d\n\n", height_);
	printf("��:%d\n\n", width_);
}

Rectangle::~Rectangle()
{

}

void Rectangle::Size()
{
	Result_ = width_ * height_;

	printf("��`�̖ʐς��v�Z\n");
	printf("��:%d*%d\n\n", width_, height_);
}

void Rectangle::Draw()
{
	printf("��`�̖ʐς�%.0f\n\n", Result_);
}
