#include <cstdlib>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
chef_and_the_frisbee(
    int const& x1,
    const int& y1,
    int const& x2,
    const int& y2
) -> string {
    string direction {};
    if (
        (x1 == x2)
        &&
        (y1 <= y2)
    ) {
        direction = "up"s;
    } else if (
        (x1 == x2)
        &&
        (y1 >= y2)
    ) {
        direction = "down"s;
    } else if (
        (y1 == y2)
        &&
        (x1 <= x2)
    ) {
        direction = "right"s;
    } else if (
        (y1 == y2)
        &&
        (x1 >= x2)
    ) {
        direction = "left"s;
    } else {
        direction = "sad"s;
    }
    return direction;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int x1 {}, y1 {}, x2 {}, y2 {};
        cin>>x1>>y1>>x2>>y2;
        cout<<chef_and_the_frisbee(x1, y1, x2, y2)<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}