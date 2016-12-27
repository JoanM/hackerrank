#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(const vector<int> &v)
{
   cout << v[0];
   for(int i = 1; i < v.size(); ++i)
   {
        cout << " " << v[i]; 
   }
    
    cout << endl;
}

void insertion_sort(vector<int> &v)
{
    for(int i = 0; i < v.size(); ++i)
    {
        int val = v[i];
        int j = i;
        for(;j > 0 && v[j-1] > val; --j )
        {
            v[j] = v[j-1];
            print(v);
        }
        v[j] = val;
        
        if(j != i)
            print(v);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> v;
    int c;
    for(int i = 0; i < n; ++i)
    {
        cin >> c;
        v.push_back(c);
    }
    insertion_sort(v);
    return 0;
}
