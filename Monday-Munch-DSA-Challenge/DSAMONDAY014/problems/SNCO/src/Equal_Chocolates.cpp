#include <iostream>
#include <cstdlib>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std::literals::string_literals;

auto
equal_chocolates(
    const int& A,
    const int& X,
    const int& B,
    const int& Y
) -> string {
    return A*X == B*Y ? "YES"s : "NO"s;
}

auto
main(void) -> int {
    int A {}, X {}, B {}, Y {};
    cin>>A>>X>>B>>Y;
    string YES_or_NO {equal_chocolates(A, X, B , Y)};
    cout<<YES_or_NO<<endl;
    return EXIT_SUCCESS;
}