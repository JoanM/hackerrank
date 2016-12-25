#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    
    vector<int> v;
    int t;
    int total = 0;
    for(int i = 0; i < N; ++i)
    {
        cin >> t;
        if((N-i)*(i+1) % 2 != 0)
        {
            total ^= t;
        }
    }

    cout << total << endl;      
}

int main() {
    int T;
    cin >> T;
    for(int i = 0 ; i < T; ++i)
        solve();
    
    return 0;
}
