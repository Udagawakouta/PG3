#include "dementorC.h"

dementorC::dementorC()
{
	name_ = "ディメンター";
	printf("%sがあらわれた\n", name_);
}

void dementorC::Purr()
{
	printf("%sの吸血鬼のキス!\n", name_);
}

dementorC::~dementorC()
{
	printf("%sをたおした\n", name_);
}
