#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];

int main()
{
	int N, K, Q;
	cin >> N;
	cin >> K;
	cin >> Q;
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < Q; ++i)
	{
		int query;
		cin >> query;
		
		cout << arr[(query + (N - K%N) )%N] << endl;
	}
}