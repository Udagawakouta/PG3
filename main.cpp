#include <stdio.h>
#include "dementorA.h"
#include "dementorB.h"
#include "dementorC.h"
#include "Monster.h"

int main()
{
	printf("�����t�F�[�Y\n");
	Maindementor* Maindementors[4];

	Maindementors[0] = new dementorA;
	Maindementors[1] = new dementorB;
	Maindementors[2] = new dementorC;
	Maindementors[3] = new Monster;

	printf("\n�U���t�F�[�Y\n");

	Maindementors[0]->Purr();
	Maindementors[1]->Purr();
	Maindementors[2]->Purr();
	Maindementors[3]->Purr();

	printf("\n�j���t�F�[�Y\n");
	for (int i = 0; i < 4; i++)
	{
		delete Maindementors[i];
	}

	return 0;
}