#include <iostream>
#include <string>

using namespace std;

int main() {
    double alasAtas, alasBawah, tinggi, luas;

    cout << "panjang alas bawah trapesium: ";
    cin >> alasBawah;

    cout << "panjang alas atas trapesium: ";
    cin >> alasAtas;

    cout << "tinggi trapesium: ";
    cin >> tinggi;

    luas = 0.5 * (alasAtas + alasBawah) * tinggi;

    cout << "luas trapesium adalah: " << luas << endl;

    return 0;
}
