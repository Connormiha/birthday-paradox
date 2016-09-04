#include <stdio.h>
#include <time.h>
#include <stdlib.h>     /* srand, rand */
#include <stdbool.h>

unsigned short randomInt(unsigned short min, unsigned short max);
bool isValueInArray(short val, short *arr, short size);

int main(void) {
    const unsigned int TOTAL = 1e5;
    unsigned int count = 0;
    unsigned short randomCount;
    const int MAX_PEOPLE = 23;

    srand(time(NULL));

    time_t start;

    clock_t t = clock();

    for (unsigned int i = 0; i < TOTAL; i++) {
        short days[MAX_PEOPLE];
        memset(days, 0, sizeof(days));

        for (short j = 0; j < MAX_PEOPLE; j++) {
            randomCount = randomInt(1, 365);

            if (isValueInArray(randomCount, days, MAX_PEOPLE)) {
                count++;
                break;
            }

            days[j] = randomCount;
        }
    }

    t = clock() - t;

    printf("Probability of %lf\n", (double) count / TOTAL);
    printf("The calculations took %lf seconds\n", (double) t / CLOCKS_PER_SEC);

    return 0;
}


unsigned short randomInt(unsigned short min, unsigned short max) {
    return min + rand() % (max - min);
    //return max + rand() / (RAND_MAX / (min - max + 1) + 1);
}

bool isValueInArray(short val, short *arr, short size){
    for (short i = 0; i < size; i++) {
        if (arr[i] == val)
            return true;
    }

    return false;
}
