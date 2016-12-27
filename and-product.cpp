#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    unsigned long long l,r;
    cin >> l >> r;
    

    unsigned long long inc = 1;
    unsigned long long res = l;
    while(l + inc < r) 
    {
    	l += inc;
    	res &= l;
    	inc *=2;
    }

    cout << (res & r) << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++)
        solve();
    return 0;
}
