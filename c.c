#include <stdio.h>

int main()
{
    int array [11] = {123, -56, 32, 999, -55, 0, 21, -66, -43, -9, 5};

    int less_sum = 0;
    int gret_sum = 0;

    int M;
    printf("Enter M: ");
    scanf("%d", &M);

    for (int i = 0; i < 11; i++)
    {
        if (array[i] < M)
            less_sum += array[i];
        else if (array[i] > M)
            gret_sum += array[i];
    }

    printf("Sum greater M = %d \n", gret_sum);
    printf("Sum less M = %d \n", less_sum);

    return 0;
}
