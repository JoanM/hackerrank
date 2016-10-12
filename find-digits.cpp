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

	for(int i = 0; i < T; ++i)
	{
		int total = 0;
		int c;
		cin >> c;

		int num = c;

		while(num)
		{
			int digit = num % 10;
			num = num / 10;
			if(digit != 0 && c % digit == 0) total ++;
		}

		cout << total << endl;
	}	
}