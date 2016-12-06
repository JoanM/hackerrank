#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void alternate_characters()
{
    string s;
    cin >> s;
    int i = 1;
    int count = 0;
    for(int i = 1; i < s.length(); i++ )
    {
        if(s[i-1] == s[i]) count ++;
    }
    
    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; ++i)
        alternate_characters();
    
    return 0;
}