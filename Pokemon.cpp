#include "Pokemon.h"

Pokemon::Pokemon()
{
	name_ = "�T�g�V";
	printf("%s�������ꂽ\n", name_);
}

void Pokemon::Purr()
{
	printf("%s�u�����V���@����̂��I�v\n", name_);
}

Pokemon::~Pokemon()
{
	printf("%s����������\n", name_);
}