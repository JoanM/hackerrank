#include <cmath>
#include <cstdio>
#include <vector>
#include <array>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

std::array<int, 100000> d;

// 1 2 6 3 4 5 2
// 4 2 
// 3 1 1 1 1
int main()
{
	int N;
	cin >> N;
	int break_pos = 0;
	bool sorted = true;
	for (int i = 0; i < N; ++i)
	{
		cin >> d[i];
		if(d[i] < d[i - 1] && sorted)
		{
			break_pos = i - 1;
			sorted = false;
		}
	}

	if(sorted)
	{
		cout << "yes" << endl;
	}
	else
	{
		int i = break_pos + 1;
		bool tried_reverse = false;
		if(break_pos + 2 < N 
			&& d[break_pos + 1] > d[break_pos + 2])
		{
			// try reverse
			for (; i < N && d[i] < d[i-1]; ++i){}
			std::reverse(&d[break_pos], &d[i]);
			tried_reverse = true;
		}
		else
		{
			for (; i < N && d[i] < d[break_pos]; ++i){}
			std::swap(d[break_pos], d[std::min(i - 1, N - 1)]);
		}

		if(std::is_sorted(d.begin(), d.begin() + N))
		{
			cout << "yes" << endl;
			cout << (tried_reverse ? "reverse " : "swap ") << break_pos + 1  << " " << std::min(i - 1, N - 1) + 1 << endl;
		}
		else
			cout << "no" << endl;
	}

}