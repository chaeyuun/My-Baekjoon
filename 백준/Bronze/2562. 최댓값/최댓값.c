#include<stdio.h>

int main() {
	int num[100];
	int max = 0;
	int linenum = 0;
	for (int i = 1; i < 10; i++)
	{
		scanf("%d", &num[i]);
		
		if (num[i]>100)
		{
			num[i] = 0;
		}
		if (max < num[i])
		{
			max = num[i];
			linenum = i;
		}
	} 
	printf("%d\n", max);
	printf("%d", linenum);
}