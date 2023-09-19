#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ll a[5][5];

    ll value = -1;
    ll target_row = 5 / 2, target_col = 5 / 2;
    ll cur_row = -1, cur_col = -1;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(a[i][j] != 0)
            {
                value = a[i][j];
                cur_row = i;
                cur_col = j;
            }

            cin >> a[i][j];

        }
    }

    cout << cur_row << " " << cur_col << endl;

    target_row = row_size / 2;
    target_col = col_size / 2;

    ll row_moves = abs(target_row - cur_row);
    ll col_moves = abs(target_col - cur_col);
    ll total_moves = row_moves + col_moves;

    cout << total_moves << endl;

    return 0;
}