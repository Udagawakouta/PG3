#include "pikachu.h"

pikachu::pikachu()
{
	name_ = "�s�J�`���E";
	printf("%s�������ꂽ\n", name_);
}

void pikachu::Purr()
{
	printf("%s�̋z���S�̃L�X!\n", name_);
}

pikachu::~pikachu()
{
	printf("%s����������\n", name_);
}
