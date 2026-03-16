#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
findNextGreaterElement(
    const vector<int>& M,
    const vector<int>& N
) -> vector<int> {
    vector<int> v(0,0);
    for (int m {}; m < static_cast<int>(M.size()); m += 1) {
        int k {};
        for (int n {}; n < static_cast<int>(N.size()); n += 1) {
            if (M[m] == N[n]) {
                k = n;
                break;
            }
        }
        int r {-1};
        for (int j {k+1}; j < static_cast<int>(N.size()); j += 1) {
            if (M[m] < N[j]) {
                r = N[j];
                break;
            }
        }
        v.push_back(r);
    }
    return v;
}

auto
main(void) -> int {
    int t {};
    cin>>t;
    while (t) {
        int m {};
        cin>>m;
        vector<int> M(m,0);
        for (auto& e : M) {
            cin>>e;
        }
        int n;
        cin>>n;
        vector<int> N(n,0);
        for (auto& e : N) {
            cin>>e;
        }
        vector<int> r {findNextGreaterElement(M, N)};
        for (const auto& e : r) {
            cout<<e<<' ';
        }
        cout<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}