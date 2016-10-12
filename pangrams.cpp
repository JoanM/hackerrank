#include <cmath>
#include <cstdio>
#include <vector>
#include <cctype>
#include <iostream>
#include <unordered_set>
using namespace std;


int main()
{

	std::unordered_set<char> set;
	std::string str;
	getline(cin, str);

	
	for (char i : str)
	{
		if(i != ' ')
		{
			set.insert(std::tolower(i));
		}
	}

	cout << (set.size() == 26 ? "pangram" : "not pangram") << endl;
}