#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
red_yellow_cards(
    int const& R,
    const int& Y
) -> int {
    int red {}, yellow {};
    if (R == 1) {
        red = R;
    } else {
        red = R/2;
    }
    if (Y == 1) {
        yellow = Y;
    } else {
        yellow = Y/2;
    }
    int matches {red+yellow};
    return matches;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int R {}, Y {};
        cin>>R>>Y;
        cout<<red_yellow_cards(R, Y)<<endl;
        T -= 1;
    }
}