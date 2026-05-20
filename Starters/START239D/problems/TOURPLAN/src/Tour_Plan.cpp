#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
tour_plan(
    const int& X,
    int const& Y,
    const int& Z
) -> int {
    int pay {};
    if (Z <= 50) {
        pay = X;
    } else {
        int remaining {Z-50};
        pay = X+(remaining*Y);
    }
    return pay;
}

auto
main(void) -> int {
    int X {}, Y {}, Z {};
    cin>>X>>Y>>Z;
    // function call
    int pay {tour_plan(X, Y, Z)};
    cout<<pay<<endl;
    return EXIT_SUCCESS;
}