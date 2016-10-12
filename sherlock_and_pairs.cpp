#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

typedef std::unordered_map<int,long long> counter_map;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		counter_map rep_counter;
		int N;
		cin >> N;
		for (int j = 0; j < N; ++j)
		{
			int number;
			cin >> number;
			++rep_counter[number];
			/* code */
		}

		long long sum = 0;
		for(auto &num : rep_counter)
		{
			if(num.second > 1)
			{
				sum += (num.second * (num.second -1));
			}
		}

		cout << sum << endl;
		/* code */
	}
}