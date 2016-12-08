#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
	string s;
	cin >> s;
	unordered_map<char, int> map;
	for(char ch : s)
	{
		map[ch] ++;
	}

	unordered_map<int, int> count;
	for(auto entry : map)
	{
		count[entry.second]++;
	}

	bool valid = false;
	if(count.size() == 1)
		valid = true;	
	else if(count.size() == 2)
	{
		auto fir = count.begin();
		auto sec = (++count.begin());

		auto min = fir->second < sec->second ? fir : sec;
		auto max = fir->second < sec->second ? sec : fir ;
		if(min->second == 1)
		{
			if(min->first == 1
				|| (min->first - max->first) == 1)
				valid = true;			
		}
	}

	cout << (valid ? "YES" : "NO") << endl; 
    return 0;
}