#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N;
		cin >> N;

		int best_non_cont;
		cin >> best_non_cont;

		int partial_sum = std::max(0, best_non_cont);
		int best_cont = best_non_cont;

		for (int j = 1; j < N; ++j)
		{
			int number;
			cin >> number;
		
			best_non_cont = std::max(best_non_cont, best_non_cont + number);
			best_non_cont = std::max(best_non_cont, number);

			partial_sum += number;
			best_cont = std::max(partial_sum, best_cont);
			partial_sum = std::max(0, partial_sum);
			/* code */
		}

		cout << best_cont << " ";
		cout << best_non_cont << endl;

		/* code */
	}
}