#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

long long values[500000];

bool check_solution(int N, long long sum)
{
	long long mid = sum / 2;
	long long current_sum = 0;
	int index = 0;
	while(current_sum < mid)
	{
		current_sum += values[index];		
		index ++;
	}
	current_sum -= values[index - 1];
	return current_sum == (sum - values[index - 1]) / 2;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N;
		long long sum = 0;
		cin >> N;
		for (int j = 0; j < N; ++j)
		{
			cin >> values[j];
			sum += values[j];
			/* code */
		}

		cout << (check_solution(N, sum) ? "YES" : "NO") << endl;
		/* code */
	}
}