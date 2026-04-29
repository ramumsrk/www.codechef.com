#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int X {}, Y {};
    cin>>X>>Y;
    int total_cost {};
    if (X==Y) {
        total_cost = X*100;
    } else if (X<Y) {
        int difference {Y-X};
        total_cost = (X*100)+(difference*150);
    }
    cout<<total_cost<<endl;
    return EXIT_SUCCESS;
}