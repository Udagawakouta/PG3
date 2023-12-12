#include "raichu.h"

raichu::raichu()
{
	name_ = "ライチュウ";
	printf("%sがあらわれた\n", name_);
}

void raichu::Purr()
{
	printf("%sの吸血鬼のキス!\n", name_);
}

raichu::~raichu()
{
	printf("%sをたおした\n", name_);
}
