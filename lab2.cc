// lab2.cc

#include <iostream>
#include <string>
#include "Monetary.h"

using namespace std;

int main()
{
    Money test1{"SEK"};
    Money test2{"YEN", 4637};
    Money test3{"USD", 6432, 34};

    Money test4{345};
    Money test5{432, 65};

    Money test6;

    Money test7{test2};

    Money test8{test6};

    test3.print(cout);
    test5.print(cout);

    cout << test3 << test5;

    test3 = test5;

    cout << "\n\n";
    
    cout << test3 << test5;

    return 0;
}
