#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

#pragma region コールバック関数

// コールバック関数
void DispResult(int* s)
{
	printf("%d秒待つ\n", *s);
}

void setTimeout(PFunc p, int& second)
{
	p(&second);
	Sleep(second * 1000);
}
#pragma endregion 


#pragma region 関数ポインタ
int main()
{
	srand((unsigned int)time(NULL));

	int evenNumber = 0; // 偶数
	int oddNumber = 3;  // 奇数
	int dice;
	dice = rand() % 6 + 1;

	PFunc p;
	p = DispResult;

	printf("0か1を入力してください\n");
	scanf_s("%d", &evenNumber);

	setTimeout(p, oddNumber);

	if (evenNumber==dice%2)
	{
		printf("正解\n");
	}
	else
	{
		printf("不正解\n");
	}

	

	printf("正解は %d でした", dice);

	return 0;
}
#pragma endregion