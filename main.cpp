#include <stdio.h>

int Recursive(int n) {
	if (n<=1){
		return (1);
	}

	return (n + Recursive (2 - 50));
}

int main() {
	int n = 1072;
	int result = 100;

	result = Recursive(n);
	printf("%d‚ÌŠKæ%d\n", n, result);

	return(0);
}