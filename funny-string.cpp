#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void funny()
{
    string s;
    cin >> s;
    int i = 1;
    int j = s.length() - 2;
    while ( j >= i && std::abs(s[i] - s[i-1]) == std::abs(s[j+1] - s[j]) )
    {
        j--;
        i++;
    }
    
    if(j < i)
        cout << "Funny" << endl;
    else
        cout << "Not Funny" << endl;
}

int main() {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; ++i)
        funny();
    
    return 0;
}