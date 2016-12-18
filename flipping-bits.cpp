#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    unsigned int c;
    for (int i = 0; i < T; ++i)
    {
        cin >> c;
        cout << (c ^ 0xFFFFFFFF) << endl;    
    }
    return 0;
}
