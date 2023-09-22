#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define mod 1000000009
using namespace std;

int main() {
    ll a, b;
    cin >> a >> b;

    /*
    
        a -> weight of limak
        b -> weight of bob

        always -> a <= b -> guaranteed that weight of limak is less than or equal to weight of bob

        every year -> 3 * a and 2 * b
        print the how many number of years after a will become strictly larger than b

    */

    ll no_of_years = 0;
    for(int i = 0; ;i++) {

        a = a * 3;
        b = b * 2;

        no_of_years++;

        if(a > b) {
            break;
        }

    }

    cout << no_of_years << endl;

    return 0;
}