#include "raichu.h"

raichu::raichu()
{
	name_ = "���C�`���E";
	printf("%s�������ꂽ\n", name_);
}

void raichu::Purr()
{
	printf("%s�̋z���S�̃L�X!\n", name_);
}

raichu::~raichu()
{
	printf("%s����������\n", name_);
}
