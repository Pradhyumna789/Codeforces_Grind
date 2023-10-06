#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    string str;
    cin >> str;

    ll upper_case_count = 0;
    ll lower_case_count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            upper_case_count++;

        } else if (islower(str[i])) {
            lower_case_count++;
        }
    }

    if (upper_case_count > lower_case_count) {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    } else if (lower_case_count > upper_case_count) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    } else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout << str << endl;

    return 0;
}
