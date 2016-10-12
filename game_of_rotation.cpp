#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long elem[1000000];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    long long total_elem_sum = 0;
    long long max = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> elem[i];
        total_elem_sum += elem[i];
        max += elem[i] * (i + 1);
    }
    
    long long prev = max;
    for(int iter = 1; iter < N; ++iter)
    {
        prev -= total_elem_sum;
        prev += elem[iter -1] * N;
        
        if(prev > max)
        {
            max = prev;
        }
    }
    
    cout << max << endl;
    
    return 0;
}
