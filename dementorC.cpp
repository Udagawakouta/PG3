#include "dementorC.h"

dementorC::dementorC()
{
	name_ = "�f�B�����^�[";
	printf("%s�������ꂽ\n", name_);
}

void dementorC::Purr()
{
	printf("%s�̋z���S�̃L�X!\n", name_);
}

dementorC::~dementorC()
{
	printf("%s����������\n", name_);
}
