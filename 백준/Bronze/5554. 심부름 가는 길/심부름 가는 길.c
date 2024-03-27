#include<stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &num1);
		num2 += num1;
	}
	printf("%d\n", num2 / 60);
	printf("%d", num2 % 60);
}