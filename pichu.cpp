#include "pichu.h"

pichu::pichu()
{
	name_ = "�s�`���[";
	printf("%s�������ꂽ\n", name_);
}

void pichu::Purr()
{
	printf("%s�̋z���S�̃L�X!\n", name_);
}

pichu::~pichu()
{
	printf("%s����������\n", name_);
}
