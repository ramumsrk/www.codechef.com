#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;
using std::abs;

auto
main(void) -> int {
    int chefland {}, byteland {};
    cin>>chefland>>byteland;
    if (abs(chefland-byteland) <= 2) {
        cout<<"Interesting"s<<endl;
    } else {
        cout<<"Boring"s<<endl;
    }
    return EXIT_SUCCESS;
}