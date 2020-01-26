#include "liczba.h"
#include "operatory.h"
#include <iostream>

using namespace std;

int main() {
// kod testowy - NIE ZMIENIAC - powinien dzialac na koncu
// mozna na chwile zakomentowac w trakcie pisania

    Liczba p1{2};
    Liczba p2 = 3;
    Liczba p3 = p1 + p2;
    p3 += p3;
    Liczba p4 = std::move(p3);

    const char* lancuch = p4.Liczba_to_string();

    cout << "od p1 do p4: " << p1 << "," << p2 << "," << p3 << "," << p4 << endl;
    cout << "p4 jako lancuch znakowy: " << lancuch << endl;
}
