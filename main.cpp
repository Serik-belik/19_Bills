#include <iostream>;
#include "Headers.h"

using namespace std;

int main() {
    int amount;
    int bills[9] = {0};
    int bills500 = 0;

    //cout << "Enter: ";
    //cin >> amount;

    calculateBills(1200, bills[8], bills[7], bills[6], bills[5], bills[4], bills[3], bills[2], bills[1], bills[0]);

    cout << "Bill\tAmount\t\tBill\tAmount" << endl;
    cout << "500\t" << bills[8] << "\t\t200\t" << bills[7] << endl;
    cout << "100\t" << bills[6] << "\t\t50\t" << bills[5] << endl;
    cout << "20\t" << bills[4] << "\t\t10\t" << bills[3] << endl;
    cout << "5\t" << bills[2] << "\t\t2\t" << bills[1] << endl;
    cout << "1\t" << bills[0] << endl;

	return 0;
}
