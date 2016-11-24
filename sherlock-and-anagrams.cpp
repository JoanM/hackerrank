#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


int process_string()
{
	unordered_map<string, int> anagrams;
	string s;
	cin >> s;

	for(int i = 1; i <= s.size(); ++i)
	{
		for(int j = 0; j + i <= s.size(); j++ )
		{
			auto str = s.substr(j, i);
			sort(str.begin(), str.end());
			anagrams[str]++;	
		}
	}

	int result = 0;
	for(auto &anagram : anagrams)
	{
		result += anagram.second * (anagram.second - 1) /2 ;
	}

	return result;
}


int main() {
	int T;
	cin >> T;

	for(int i = 0; i < T; ++i)
	{
		cout << process_string() << endl;
	}

    return 0;
}