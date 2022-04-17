# JanGoOConverter
A Simple Header file for necessoray conversions in cpp

# Description
I created this simple header file named "JanGoOConverter.h".
In this release I have only included four functions that will perform conversion respectively:

1. int char_to_int(char c)
    It will receive character as a parameter and will return integer i.e., '1' -> 1

2.  char int_to_char(int i)
    It will receive integer as a parameter and will return character i.e., 1 -> '1'

3.  int str_to_int(string str)
    It will receive string as a parameter and will return integer i.e., "12" -> 12

4.  string int_to_str(int integer)
    It will receive integer as a parameter and will return string i.e., 12 -> "12"

# How To Use
Create the object (instance) of class JanGoO Converter and use the desired member function as shown in the example below.
```

// Include Header File
#include "JanGoOConverter.h"

// Basic boiler-plate for printing to the console
#include <iostream>
using std::cout;

int main() { // simple main function

    // Create JanGoOConverter object for using functionality
    JanGoOConverter C;

    // Simply call the relevent function and pass it the required data
    // and it the function will return the desired data
    cout << C.char_to_int('2') << " " << typeid(C.char_to_int('2')).name() << "\n";
    cout << C.int_to_char(2) << " " << typeid(C.int_to_char(2)).name() << "\n";
    cout << C.str_to_int("3435") << " " << typeid(C.str_to_int("3435")).name() << "\n";
    cout << C.int_to_str(3435) << " " << typeid(C.int_to_str(3435)).name() << "\n";

    return 0;
}

```

# Contributions
You can contribute by sending a pull request or contacting me at [asadalijangoo@gmail.com](mailto:asadalijangoo@gmail.com)

# Support Me
You can support my work via JazzCash or EasyPisa
Account No: 0304 3388800

Thank You for your support!
