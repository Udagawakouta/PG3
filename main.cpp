#include <stdio.h>
#include <list>

int main()
{
	// �R�����錾
	std::list<const char*> YamanoteLine = {
	"����","�_�c","�H�t��","��k��","���","��J�w","���闢","�c�[",
	"�","����","���","�r��","�ڔ�","���c�n��","�V��v��","�V�h",
	"��X��","���h","�a�J","�b���","�ڍ�","�ܔ��c","���","�i��","�c��","�l����",
	"�V��","�L�y��"
	};

	printf("1970�N\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		// ������̍Ō�͖������Ȃ�
		if (itr != --YamanoteLine.end()) {
			printf("��");
		}
	}
	printf("\n\n");

	printf("2019�N\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "�c�[") {
			itr = YamanoteLine.insert(itr, "�����闢");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		// ������̍Ō�͖������Ȃ�
		if (itr != --YamanoteLine.end()) {
			printf("��");
		}
	}
	printf("\n\n");

	printf("2022�N\n");
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		if (*itr == "�c��") {
			itr = YamanoteLine.insert(itr, "���փQ�[�g�E�F�C");
			break;
		}
	}
	for (std::list<const char*>::iterator itr = YamanoteLine.begin(); itr != YamanoteLine.end(); itr++) {
		printf(*itr);
		// ������̍Ō�͖������Ȃ�
		if (itr != --YamanoteLine.end()) {
			printf("��");
		}
	}
	printf("\n");

	return 0;
}