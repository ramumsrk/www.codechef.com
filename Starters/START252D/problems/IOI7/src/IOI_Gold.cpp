#include <cstdlib>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
IOI_gold(
        const int& N,
        const int& G
) -> string {
    return N >= G ? "Yes"s : "No"s;
}

auto
main(void) -> int {
    int N {}, G {};
    cin>>N>>G;
    cout<<IOI_gold(N, G)<<endl;
    return EXIT_SUCCESS;
}
