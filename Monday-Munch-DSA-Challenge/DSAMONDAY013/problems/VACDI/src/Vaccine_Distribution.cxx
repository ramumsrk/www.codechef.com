#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::begin;
using std::end;
using namespace std::literals::string_literals;
using std::string;

auto
vaccine_distribution(
    const int& N
) -> string {
    vector<int> V(N,0);
    for (auto& v : V) {
        cin>>v;
    }
    sort(begin(V), end(V));
    vector<int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    sort(begin(P), end(P));
    string can_cure {"Yes"s};
    for (int i {}; i < N; i += 1) {
        if (P[i] > V[i]) {
            can_cure = "No"s;
            break;
        }
    }
    return can_cure;
}

auto
main(void) -> int {
    int N {};
    cin>>N;
    string can_cure {vaccine_distribution(N)};
    cout<<can_cure<<endl;
    return EXIT_SUCCESS;
}