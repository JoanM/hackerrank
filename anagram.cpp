#include <cmath>
#include <cstdio>
#include <vector>
#include <cctype>
#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
	int T;
	cin >> T;

	for(int i = 0; i<T; i++)
	{		
		std::unordered_map<char,int> char_map;
		std::string str;
		cin >> str;
		if(str.length() % 2 != 0)
		{
			cout << "-1" << std::endl;
		}
		else
		{
			std::string first = str.substr(0, str.length()/2);

			for(char i : first)
			{
				char_map[i] ++;
			}
			
			std::string second = str.substr( str.length()/2);

			for(char i : second)
			{
				char_map[i] --;
			}

			int changes = 0;
			for(auto entry : char_map)
			{
				if(entry.second > 0)
					changes += entry.second;
			}

			cout << changes << endl;
		}
	}
}