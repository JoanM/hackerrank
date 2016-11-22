#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_palindrom(string s)
{
	size_t size = s.size();
	int start = 0;
	int end = size - 1;
	while(start < end)
	{
		if(s.at(start) != s.at(end)) return false;
		start ++;
		end--;
	}
	
	return true;
}

void check_palindrome(string s)
{
	size_t size = s.size();
	int start = 0;
	int end = size - 1;
	while(start < end)
	{
		if(s.at(start) != s.at(end))
		{
			if(is_palindrom(s.substr(start + 1, end - start)))
			{
				cout << start << endl;
				return;
			}
			
			cout << end << endl;
			return;			
		}
		
		start++;
		end--;		
	}

	cout << -1 << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
    	std::string s;
    	cin >> s;
    	check_palindrome(s);
    }

    return 0;
}
