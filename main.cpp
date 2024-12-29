#include <iostream>;
#include "Headers.h"

using namespace std;

int main() {
    int amount;
    int bills500 = 0;
    int bills200 = 0;
    int bills100 = 0;
    int bills50 = 0;
    int bills20 = 0;
    int bills10 = 0;
    int bills5 = 0;
    int bills2 = 0;
    int bills1 = 0;

    cout << "Enter amount of money: ";
    cin >> amount;

    calculateBills(amount, bills500, bills200, bills100, bills50, bills20, bills10, bills5, bills2, bills1);

    cout << "Bill\tAmount\t\tBill\tAmount" << endl;
    cout << "500\t" << bills500 << "\t\t200\t" << bills200 << endl;
    cout << "100\t" << bills100 << "\t\t50\t" << bills50 << endl;
    cout << "20\t" << bills20 << "\t\t10\t" << bills10 << endl;
    cout << "5\t" << bills5 << "\t\t2\t" << bills2 << endl;
    cout << "1\t" << bills1 << endl;

	return 0;
}
