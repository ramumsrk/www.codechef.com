#include <cstdlib>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
balanced_ingredients(
    const int& a,
    const int& b,
    const int& c,
    const int& d
) -> string {
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        return "Yes"s;
    } else if (
        ((a != b) && (a+b == 0))
        ||
        ((b != c) && (b+c == 0))
        ||
        ((c != d) && (c+d == 0))
        ||
        ((d != a) && (d+a == 0))
        ||
        ((c != a) && (a+c == 0))
        ||
        ((b != d) && (b+d == 0))
    ) {
        return "Yes"s;
    } else if (
        ((a != b && b != c && c != d && d != a && b != c && a != c) && (a+b+c == 0 || b+c+d == 0 || c+d+a == 0 || d+a+b == 0))
    ) {
        return "Yes"s;
    } else if (a+b+c+d == 0) {
        return "Yes"s;
    } else {
        return "No"s;
    }
}

auto
main(void) -> int {
    int a {}, b {}, c {}, d {};
    cin>>a>>b>>c>>d;
    // function call
    string yes_or_no {balanced_ingredients(a, b, c, d)};
    cout<<yes_or_no<<endl;
    return EXIT_SUCCESS;
}