#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
favoite_words(
    const string& S
) -> string {
    string yes_or_no {"No"s};
    if (
        (S[0] == 'c')
        ||
        (S[3] == 'f')
        ||
        (S[0] == 'c' && S[3] == 'f')
    ) {
        yes_or_no = "Yes"s;
    }
    return yes_or_no;
}

auto
main(void) -> int {
    string S {};
    cin>>S;
    cout<<favoite_words(S)<<endl;    
    return EXIT_SUCCESS;
}