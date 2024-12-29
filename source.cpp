#include "Headers.h"

void calculateBills(int amount, int& bills500,
    int& bills200, int& bills100,
    int& bills50, int& bills20,
    int& bills10, int& bills5,
    int& bills2, int& bills1) {

    bills500 = amount / 500;
    amount -= bills500 * 500;

    bills200 = amount / 200;
    amount -= bills200 * 200;

    bills100 = amount / 100;
    amount -= bills100 * 100;

    bills50 = amount / 50;
    amount -= bills50 * 50;

    bills20 = amount / 20;
    amount -= bills20 * 20;

    bills10 = amount / 10;
    amount -= bills10 * 10;

    bills5 = amount / 5;
    amount -= bills5 * 5;

    bills2 = amount / 2;
    amount -= bills2 * 2;

    bills1 = amount / 1;
    amount -= bills1 * 1;
}