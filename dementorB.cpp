#include "dementorB.h"

dementorB::dementorB()
{
	name_ = "ディメンター";
	printf("%sがあらわれた\n", name_);
}

void dementorB::Purr()
{
	printf("%sの吸血鬼のキス!\n", name_);
}

dementorB::~dementorB()
{
	printf("%sをたおした\n", name_);
}
