#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	IShape* shape[2];
	
	shape[0] = new Circle();

	shape[1] = new Rectangle();

	for (int i = 0; i < 2; i++)
	{
		shape[i]->Size();
		shape[i]->Draw();
	}

	return 0;
}