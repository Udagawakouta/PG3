#include <stdio.h>
#include "pichu.h"
#include "pikachu.h"
#include "raichu.h"
#include "Pokemon.h"

int main()
{
	printf("�����t�F�[�Y\n");
	MainPokemon* Maindementors[4];

	Maindementors[0] = new pichu;
	Maindementors[1] = new pikachu;
	Maindementors[2] = new raichu;
	Maindementors[3] = new Pokemon;

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