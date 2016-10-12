#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;


int main()
{
	int T;
	cin >> T;
	std::unordered_map<char, int> num_letter_in_words {};
	for (int i = 0; i < T; ++i)
	{
		std::string word;
		cin >> word;
		std::unordered_set<char> unique_ch {};
		for (auto ch : word)
		{
			unique_ch.insert(ch);
		}

		for(auto &ch : unique_ch)
		{
			num_letter_in_words[ch] += 1;
		}
	}

	int result = 0;

	for(auto entry : num_letter_in_words)
	{
		if(entry.second == T)
			result += 1;
	}

	cout << result << endl;
}