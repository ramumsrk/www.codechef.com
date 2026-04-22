#include <cstdlib>
#include <cstdint>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    uint16_t X {}, Y {};
    cin>>X>>Y;
    if (Y <= X) {
        cout<<0<<endl;
    } else {
        cout<<100<<endl;
    }
    return EXIT_SUCCESS;
}