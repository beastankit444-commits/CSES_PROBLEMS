#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int longest = 1;
    int run = 1;

    for (size_t i = 1; i < s.size(); i++){
        if (s[i - 1] == s[i]){
            run++;
        }else{
            run = 1;
        }

        longest = max(longest, run);
    }

    cout << longest << '\n';
    return 0;
}