#include <cstdlib>
#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using namespace std::literals::string_literals;

auto
varied_digits(
    const int& X
) -> string {
    int units_digit {X%10};
    int tens_digit {((X-units_digit)/10)};
    return units_digit != tens_digit ? "Yes"s : "No"s;
}

auto
main(void) -> int {
    int X {};
    cin>>X;
    string yes_or_no {varied_digits(X)};
    cout<<yes_or_no<<endl;
    return EXIT_SUCCESS;
}