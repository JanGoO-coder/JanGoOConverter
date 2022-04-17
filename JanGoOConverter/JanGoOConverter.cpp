#include "JanGoOConverter.h"

#include <iostream>
using std::cout;

int main()
{
    JanGoOConverter C;

    cout << C.char_to_int('2') << " " << typeid(C.char_to_int('2')).name() << "\n";
    cout << C.int_to_char(2) << " " << typeid(C.int_to_char(2)).name() << "\n";
    cout << C.str_to_int("3435") << " " << typeid(C.str_to_int("3435")).name() << "\n";
    cout << C.int_to_str(3435) << " " << typeid(C.int_to_str(3435)).name() << "\n";
}
