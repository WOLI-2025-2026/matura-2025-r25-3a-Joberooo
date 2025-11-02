// Patryk Serafin
// Zadanie 2
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

string z2_symbole_txt_path = "../zalaczniki-2025/symbole.txt";

// Zadanie 2.1
bool czyPalindrom2_1(string tekst) {
    int size = tekst.size() - 1;
    for (int i = 0; i < size; i++) {
        if (tekst[i] != tekst[size - i - 1]) {
            return false;
        }
    }
    return true;
}

void Zadanie2_1() {
    ifstream plik(z2_symbole_txt_path);
    if (!plik.is_open()) {
        cerr << "Nie udalo sie otworzyc pliku!" << endl;
        return;
    }

    ofstream wynik("wynik2_1.txt");

    string linia;
    while (getline(plik, linia)) {
        if (czyPalindrom2_1(linia)) {
            cout << linia << endl;
            wynik << linia << endl;
        }
    }

    plik.close();
    wynik.close();
}
int main() {
    Zadanie2_1();
    return 0;

}

