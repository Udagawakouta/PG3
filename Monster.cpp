#include "Monster.h"

Monster::Monster()
{
	name_ = "ヴォルデモート卿";
	printf("%sがあらわれた\n", name_);
}

void Monster::Purr()
{
	printf("%s「お辞儀を　するのだ！」\n", name_);
}

Monster::~Monster()
{
	printf("%sをたおした\n", name_);
}