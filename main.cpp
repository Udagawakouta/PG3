#include <stdio.h>

int Recursive(int n, int m) {
	m--;
	if (m <= 0) {
		return (n);
	}

	return (n + Recursive(n * 2 - 50, m));
}

int main() {
	int v = 0;
	int m = 8;
	int n = 100; // �ċA�I�Ȉꎞ�Ԃ̎���
	int b = 1072;// ��ʓI�Ȉꎞ�Ԃ̎���

	v = m * b;

	int result;
	
	result = Recursive(n, m);

	printf("%d���ԕ��̍ċA�I�Ȓ����̌n��%d\n", m, result);
	printf("%d���ԕ��̈�ʓI�Ȓ����̌n��%d\n", m, v);

	return(0);
}