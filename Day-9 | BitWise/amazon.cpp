#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(void)
{

    // Fetch array from user.
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll res=0; 
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        // Logic goes here.
        res = res ^ arr[i];
    }

    cout << res << endl;

    return 0;
}