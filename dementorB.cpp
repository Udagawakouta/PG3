#include "dementorB.h"

dementorB::dementorB()
{
	name_ = "�f�B�����^�[";
	printf("%s�������ꂽ\n", name_);
}

void dementorB::Purr()
{
	printf("%s�̋z���S�̃L�X!\n", name_);
}

dementorB::~dementorB()
{
	printf("%s����������\n", name_);
}
