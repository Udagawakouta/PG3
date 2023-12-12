#include "pikachu.h"

pikachu::pikachu()
{
	name_ = "ピカチュウ";
	printf("%sがあらわれた\n", name_);
}

void pikachu::Purr()
{
	printf("%sの吸血鬼のキス!\n", name_);
}

pikachu::~pikachu()
{
	printf("%sをたおした\n", name_);
}
