#include "dementorA.h"

dementorA::dementorA()
{
	name_ = "�f�B�����^�[";
	printf("%s�������ꂽ\n", name_);
}

void dementorA::Purr()
{
	printf("%s�̋z���S�̃L�X!\n", name_);
}

dementorA::~dementorA()
{
	printf("%s����������\n", name_);
}
