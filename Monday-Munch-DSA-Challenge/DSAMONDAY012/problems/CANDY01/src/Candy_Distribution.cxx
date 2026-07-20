#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using namespace std::literals::string_literals;

auto
candy_distribution(
    const int& N,
    long long int const& C
) -> string {
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    long long int c {C};
    string result {};
    for (int i {}; i < N; i += 1) {
        if (c >= A[i]) {
            result = "Yes"s;
            c -= A[i];
        } else {
            result = "No"s;
            break;
        }
    }
    return result;
}

auto
main(void) -> int {
    int N {};
    long long int C {};
    cin>>N>>C;
    string result {candy_distribution(N, C)};
    cout<<result<<endl;    
    return EXIT_SUCCESS;
}