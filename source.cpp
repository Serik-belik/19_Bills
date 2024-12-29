#include "Headers.h"

void calculateBills(int amount, int& bills500,
    int& bills200, int& bills100,
    int& bills50, int& bills20,
    int& bills10, int& bills5,
    int& bills2, int& bills1) {

    int bills[] = { bills1, bills2, bills5, bills10, bills20, bills50, bills100, bills200, bills500 };
    int nominals[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500 };
    int i = 8;

    while (i && amount) {
        bills[i] += amount / nominals[i];
        amount -= bills[i] * nominals[i];
        i--;
    }

}