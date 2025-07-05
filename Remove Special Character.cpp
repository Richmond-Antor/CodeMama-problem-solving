#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, result = "";
    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] != '.' && S[i] != '!' && S[i] != '@' && S[i] != '#' &&
            S[i] != '$' && S[i] != '%' && S[i] != '^' && S[i] != '&' && S[i] != '*' &&
            S[i] != '(' && S[i] != ')' && S[i] != '/' ) {
            result += S[i];
        }
    }

    cout << result;
    return 0;
}
