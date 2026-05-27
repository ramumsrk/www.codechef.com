#include <string>
#include <iostream>
#include <cstdlib>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
points_table(
    const int& X,
    int const& Y,
    const int& A,
    int const& B
) -> string {
    string winner {"Alice"s};
    if (X > A) {
        ;
    } else if (A > X) {
        winner = "Bob"s;
    } else if (X == A && Y > B) {
        ;
    } else if (X == A && B > Y) {
        winner = "Bob"s;
    } else if (X == A && Y == B) {
        ;
    }
    return winner;
}

auto
main(void) -> int {
    int X {}, Y {}, A {}, B {};
    cin>>X>>Y>>A>>B;
    string winner {points_table(X, Y, A, B)};
    cout<<winner<<endl;
    return EXIT_SUCCESS;
}