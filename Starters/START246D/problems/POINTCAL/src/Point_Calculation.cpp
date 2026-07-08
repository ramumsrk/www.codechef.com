#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int A {}, B {}, C {};
    cin>>A>>B>>C;
    int points {(A*3)+(B*1)+(C*0)};
    cout<<points<<endl;
    return EXIT_SUCCESS;
}