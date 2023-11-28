#pragma once
#include <stdio.h>

class Maindementor
{
public:

	Maindementor();

	virtual ~Maindementor();

	virtual void Purr();

protected:

	const char* name_;

};

