#include "liczba.h"
#include "operatory.h"
#include <string>

using namespace std;

std::ostream& operator<<(std::ostream& str, const Liczba& a) {
    return str << a.x;
}

std::istream& operator>>(std::istream& str, Liczba& a) {
    str >> a.x;
    return str;

}
Liczba operator+(const Liczba& a, const Liczba& b){
    a + b;
}
Liczba& operator+=(Liczba a, const Liczba& b) {
    a = a + b;
}