#include "Monster.h"

Monster::Monster()
{
	name_ = "���H���f���[�g��";
	printf("%s�������ꂽ\n", name_);
}

void Monster::Purr()
{
	printf("%s�u�����V���@����̂��I�v\n", name_);
}

Monster::~Monster()
{
	printf("%s����������\n", name_);
}