#include <stdio.h>

int main()
{

    int passengers[5];
    int maxPassengers = 0, minPassengers = 0; //следи броя на пътници
    int maxStation = 0, minStation = 0; //дава гарата с най-мн/малко пътници

    for (int i = 0; i < 5; i++) {
        printf("Напишете броя на пътници за гара %d: ", i + 1);
        scanf_s("%d", &passengers[i]);

        if (i == 0) {
            maxPassengers = minPassengers = passengers[i];
            maxStation = minStation = i + 1;
        }
        else {
            if (passengers[i] > maxPassengers) {
                maxPassengers = passengers[i];
                maxStation = i + 1;
            }
            if (passengers[i] < minPassengers) {
                minPassengers = passengers[i];
                minStation = i + 1;
            }
        }
    }

    printf("Гарата с най-много пътници е %d с %d пътници.\n", maxStation, maxPassengers);
    printf("Гарата с нах-малко пътници е %d с %d пътници.\n", minStation, minPassengers);

    return 0;
}


