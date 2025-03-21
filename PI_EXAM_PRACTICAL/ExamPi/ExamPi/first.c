#include <stdio.h>

int main()
{

    int A[2][6];
    int sum[2] = {0, 0};
    float average[2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Въведете броя на пътници за влак %d на гара %d: ", i + 1, j + 1);
            scanf_s("%d", &A[i][j]);
            sum[i] += A[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        average[i] = (float)sum[i] / 6;
    }

    for (int i = 0; i < 2; i++) {
        printf("Средно аритметичния брой на пътници за влак %d е: %.2f\n", i + 1, average[i]);
    }

    return 0;
}


