#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
unlock_the_next_level(
    const int& X,
    int const& Y
) -> void {
    if (Y >= X) {
        cout<<"UNLOCKED"s<<endl;
    } else {
        cout<<(X-Y)<<endl;
    }
}

auto
main(void) -> int {
    int X {}, Y {};
    cin>>X>>Y;
    unlock_the_next_level(X, Y);
    return EXIT_SUCCESS;
}