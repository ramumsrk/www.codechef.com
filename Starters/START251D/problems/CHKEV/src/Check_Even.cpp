#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
check_even(
    const int& L,
    const int& R
) -> string {
    string yes_or_no {"No"s};
    for (int i {L}; i <= R; i += 1) {
        if (i%2 == 0) {
            yes_or_no = "Yes"s;
            break;
        }
    }
    return yes_or_no;
}

auto
main(void) -> int {
    int L {}, R {};
    cin>>L>>R;
    string yes_or_no {check_even(L, R)};
    cout<<yes_or_no<<endl;
    return EXIT_SUCCESS;
}