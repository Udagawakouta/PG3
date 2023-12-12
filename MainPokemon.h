#pragma once
#include <stdio.h>

class MainPokemon
{
public:

	MainPokemon();

	virtual ~MainPokemon();

	virtual void Purr();

protected:

	const char* name_;

};

