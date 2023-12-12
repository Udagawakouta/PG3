#include "Pokemon.h"

Pokemon::Pokemon()
{
	name_ = "サトシ";
	printf("%sがあらわれた\n", name_);
}

void Pokemon::Purr()
{
	printf("%s「お辞儀を　するのだ！」\n", name_);
}

Pokemon::~Pokemon()
{
	printf("%sをたおした\n", name_);
}