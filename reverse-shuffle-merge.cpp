#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

unordered_map<char, int> map;
void get_solution(string &s)
{
	string solution;
	unordered_map<char, int> current;
	unordered_map<char, int> solution_chars;
	int max = 0;
	for(int i = 0; i < s.size(); i++)
	{
		current[s[i]]++;
		if(solution_chars[s[i]] >= (map[s[i]]/2)) continue;

		if(s[i] < s[max])
		{
			max = i;
		}
		if( (current[s[i]]-solution_chars[s[i]]) > map[s[i]]/2)
		{
			for(int j = i; j > max; j-- ) current[s[j]]--;
			solution.push_back(s[max]);
			solution_chars[s[max]]++;
			max = max + 1;
			while(solution_chars[s[max]] >= (map[s[max]]/2)
				&& max < s.size())
			{
				max++;
			}

			i = max - 1;
		}
		 
	}

	cout << solution << endl;
}

int main() {
	string s;
	cin >> s;

	for(char ch : s)
	{
		map[ch] ++;
	}

	std::reverse(s.begin(), s.end());
	get_solution(s);
}