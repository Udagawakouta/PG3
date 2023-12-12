#pragma once
#include"MainPokemon.h"

class Pokemon:public MainPokemon
{
public:

	Pokemon();
	~Pokemon()override;

	void Purr()override;
private:
};

