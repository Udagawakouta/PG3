#include "dementorA.h"

dementorA::dementorA()
{
	name_ = "ディメンター";
	printf("%sがあらわれた\n", name_);
}

void dementorA::Purr()
{
	printf("%sの吸血鬼のキス!\n", name_);
}

dementorA::~dementorA()
{
	printf("%sをたおした\n", name_);
}
