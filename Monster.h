#pragma once
#include"Maindementor.h"

class Monster:public Maindementor
{
public:

	Monster();
	~Monster()override;

	void Purr()override;
private:
};

