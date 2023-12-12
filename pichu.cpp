#include "pichu.h"

pichu::pichu()
{
	name_ = "ピチュー";
	printf("%sがあらわれた\n", name_);
}

void pichu::Purr()
{
	printf("%sの吸血鬼のキス!\n", name_);
}

pichu::~pichu()
{
	printf("%sをたおした\n", name_);
}
