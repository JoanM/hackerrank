#include <cmath>
#include <cstdio>
#include <vector>
#include <cctype>
#include <iostream>
#include <unordered_set>
using namespace std;


int main()
{
	int T;
	cin >> T;

	for(int i = 0; i<T; i++)
	{		
		std::unordered_set<char> char_set;
		std::string str;
		cin >> str;

		for(char i : str)
			char_set.insert(i);

		cin >> str;
		bool coincidence = false;
		for(char i : str)
		{
			coincidence = char_set.find(i) != char_set.end();
			if(coincidence) break;
		}

		cout << (coincidence ? "YES" : "NO") << endl;
	}
}