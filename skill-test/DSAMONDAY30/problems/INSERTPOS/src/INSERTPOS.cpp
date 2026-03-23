#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
searchInsertPosition(
    const vector<int>& arr,
    const int& target
) -> int {
    int index {};
    for (int i {}; i < static_cast<int>(arr.size()); i += 1) {
        if (target == arr[i]) {
            index = i;
            break;
        } else if (target <= arr[i]) {
            index = i;
            break;
        } else {
            index = static_cast<int>(arr.size()-1) + 1;
            break;
        }
    }
    return index;
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int n {}, target {};
        cin>>n>>target;
        vector<int> arr(n,0);
        for (auto& e : arr) {
            cin>>e;
        }
        int result {searchInsertPosition(arr, target)};
        cout<<result<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}