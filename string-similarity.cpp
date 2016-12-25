#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    
    int l = 0;
    int r = 0;
    std::vector<int> z;
    z.push_back(s.size());
    for(int i = 1; i <s.size(); ++i)
    {
        if(i < r
           && i > l)
        {
            int zp = z[i-l];
            if(zp >= r - i)
            {
                zp = r - i;
                while((i + zp) < s.size() && s[zp] == s[i + zp]) ++zp;
                
                r = i + zp;
                l = i;
            }
            z.push_back(zp);
        }
        else
        {
            int t = i;
            while (t < s.size() && s[t] == s[t - i]) t ++;
            
            z.push_back(t-i);
            l = i;
            r = t ;
        }
    }
    
    cout << std::accumulate(z.begin(), z.end(), 0ull) << endl;
}

int main() {
	int T;
	cin >> T;

	for(int i = 0; i < T; ++i)
	{
		solve();
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
