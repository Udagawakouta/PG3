#include <stdio.h>
#include <list>

int main()
{
	// 山手線を宣言
	std::list<const char*> YamanoteLine = {
	"東京","神田","秋葉原","御徒町","上野","鶯谷駅","日暮里","田端",
	"駒込","巣鴨","大塚","池袋","目白","高田馬場","新大久保","新宿",
	"代々木","原宿","渋谷","恵比寿","目黒","五反田","大崎","品川","田町","浜松町",
	"新橋","有楽町"
	};

	printf("1970年\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		// 文字列の最後は矢印をつけない
		if (itr != --YamanoteLine.end()) {
			printf("→");
		}
	}
	printf("\n\n");

	printf("2019年\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "田端") {
			itr = YamanoteLine.insert(itr, "西日暮里");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		// 文字列の最後は矢印をつけない
		if (itr != --YamanoteLine.end()) {
			printf("→");
		}
	}
	printf("\n\n");

	printf("2022年\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "田町") {
			itr = YamanoteLine.insert(itr, "高輪ゲートウェイ");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		// 文字列の最後は矢印をつけない
		if (itr != --YamanoteLine.end()) {
			printf("→");
		}
	}
	printf("\n");

	return 0;
}