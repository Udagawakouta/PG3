#pragma once
#include"MainPokemon.h"

class pikachu:public MainPokemon
{
public:

	pikachu();
	~pikachu();

	void Purr() override;

private:
};

