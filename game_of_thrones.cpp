#include <cmath>
#include <cstdio>
#include <vector>
#include <cctype>
#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{

	std::unordered_map<char, int> char_map;
	std::string str;
	cin >> str;

	
	for (char i : str)
	{
		char_map[i]++;
	}

	int odd = 0;
	for(auto entry : char_map)
	{
		if(entry.second % 2 != 0) ++odd;
	}

	cout << (odd > 1 ? "NO" : "YES") << endl; 
}