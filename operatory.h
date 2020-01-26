#include "liczba.h"
#include <iostream>
#include <fstream>
class Liczba;
// deklaracje operatorow, ktore nalezy zdefiniowac w operatory.cpp

Liczba operator+(const Liczba& a, const Liczba& b);
Liczba& operator+=(Liczba& a, const Liczba& b);
std::ostream& operator<<(std::ostream& str, const Liczba& a);
std::istream& operator>>(std::istream& str, Liczba& a);
