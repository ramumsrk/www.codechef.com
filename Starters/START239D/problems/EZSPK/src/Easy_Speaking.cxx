#include <cstdlib>
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using namespace std::literals::string_literals;

auto
easy_speaking(
    const int& N,
    string const& S
) -> bool {
    bool is_hard {false};
    int consonants_count {};
    for (int i {}; i < N; i += 1) {
        if (
            S[i] != 'a' 
            &&
            S[i] != 'e'
            &&
            S[i] != 'i'
            &&
            S[i] != 'o'
            &&
            S[i] != 'u'
        ) {
            consonants_count += 1;
            //cout<<"if: "<<consonants_count<<' '<<S[i]<<endl;
        } else {
            if (consonants_count >= 4) {
                //cout<<"else 1 "<<consonants_count<<endl;
                is_hard = true;
                break;
            } else {
                //cout<<"else 2 "<<consonants_count<<endl;
                consonants_count = 0;
            }
        }
    }
    return (consonants_count >= 4 && N == consonants_count ? true : is_hard);
}

auto
main(void) -> int {
    int T {};
    cin>>T;
    while (T) {
        int N {};
        cin>>N;
        string S {};
        cin>>S;
        bool is_hard {easy_speaking(N, S)};
        if (is_hard) cout<<"Yes"s<<endl;
        else cout<<"No"s<<endl;
        T -= 1;
    }
    return EXIT_SUCCESS;
}