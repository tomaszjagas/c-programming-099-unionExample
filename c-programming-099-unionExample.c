#include <stdio.h>

union car {
    int iValue;
    float fValue;
    char cValue[40];
};

struct owner {
    char socSecurity[12];
};

struct leaseCompany {
    char name[40];
    char headquarters[40];
};

struct carData {
    char make[15];
    int status; // 0 = owned, 1 = leased
    union {
        struct owner ownCar;
        struct leaseCompany leaseCar;
    };
};

int main() {
    union car car1, car2, *car3;
    printf("Memory size occupied by data: %zu", sizeof(car1));

    return 0;
}