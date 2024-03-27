#include<stdio.h>

int main() {
    int num1 = 0;
    int arr[100000];
    int arr2[10000];
    int number = 1000;
    int finalnum = 0;
    scanf("%d", &num1);

    for (int i = 0; i < num1; i++)
    {
        int temp = 0;
        scanf("%d", &arr2[i]);

    }

    for (int i = 2; i <= number; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= number; i++)
    {
        if (arr[i] == 0) continue;

        for (int j = 2 * i; j <= number; j += i) {
            arr[j] = 0;
        }
    }

    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            if (arr[j] == arr2[i])
            {
                finalnum += 1;
            }
        }
    }

    printf("%d", finalnum);
    return 0;
}