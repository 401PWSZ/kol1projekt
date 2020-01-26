#include "liczba.h"
#include <iostream>

using namespace std;
Liczba::Liczba(double arg){
    x = arg;
    cout << x;
};
Liczba::Liczba(const Liczba& arg){
    x = arg.x;
    cout << x;
};
Liczba::Liczba(Liczba&& arg){
    x = arg.x;
    arg.x = 0.0;

};
Liczba& Liczba::operator=(const Liczba& arg){
    x = arg.x;   
};
Liczba& Liczba::operator=(Liczba&& arg){
    x = arg.x;
    arg.x = 0;
    return *this;
};
Liczba::~Liczba(){
    delete this;
}

const char* Liczba::Liczba_to_string() const{
    string s = to_string(x);
    cout << "Konwersja na string: " << s << ".";
    return 0;
}
// tu prosze zdefiniowac wszystkie skladowe zadeklarowane w klasie Liczba