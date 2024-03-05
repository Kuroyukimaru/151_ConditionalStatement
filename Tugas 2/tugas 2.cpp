#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0));

    bilangan = rand() % 10;

    cout << "Bilanga awal = " << bilangan << endl;

    if (bilangan >= 5) {
        bilangan = 2 * bilangan;
    }

    cout << "Bilangan akhir = " << bilangan << endl;

    return 0;

}