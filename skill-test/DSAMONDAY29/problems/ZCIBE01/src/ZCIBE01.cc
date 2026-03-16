#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::map;

auto
findSingleNumber(
    const vector<int>& numbers
) -> int {
    map<int,int> n_o;
    int r {};
    if (static_cast<int>(numbers.size()) == 1) {
        r = numbers[0];
    } else {
        for (int i {}; i < static_cast<int>(numbers.size()) ; i += 1) {
            if (!n_o.contains(numbers[i])) {
                n_o[numbers[i]] = 1;
            } else {
                n_o[numbers[i]] += 1;
            }
        }
        for (const auto& [k, v] : n_o) {
            if (v == 1) {
                r = k;
                break;
            }
        }
    }
    return r;
}

auto
main(void) -> int {
    int t {};
    cin>>t;
    while (t) {
        int n;
        cin>>n;
        vector<int> numbers(n,0);
        for (auto& e : numbers) {
            cin>>e;
        }
        int r {findSingleNumber(numbers)};
        cout<<r<<endl;
        t -= 1;
    }
    return EXIT_SUCCESS;
}