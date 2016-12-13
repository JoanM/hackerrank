#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N, K, unfairness = INT_MAX;
    cin >> N >> K;
    int list[N];
    for (int i=0; i<N; i++)
        cin >> list[i];
    
    std::sort(list, list + N);
    
    int fairness = list[K - 1] - list[0];
    
    for(int i = 1; i <= N - K; ++i)
    {
        fairness = std::min(fairness,list[K + i -1] - list[i]);
    }
    
    cout << fairness << "\n";
    return 0;
}
