#include <iostream>
#include <cstdlib>

using std::cin;
using std::endl;
using std::cout;

auto
chocolate_squares(
    const int& L,
    int const& R
) -> int {}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int L {}, B {};
        cin>>L>>B;
        chocolate_squares(L, B);
        T -= 1;
    }
    return EXIT_SUCCESS;
}