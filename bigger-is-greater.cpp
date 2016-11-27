#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	if(s.size() == 1)
	{
		cout << "no answer" << endl;
		return;
	}

	for(int i = s.size() - 1 ; i > 0; --i)
	{
		if(s[i] > s[i - 1])
		{
			string rest = s.substr(i);
			sort(rest.begin(), rest.end());
			int j= 0;
			for(; j < rest.size() && rest[j] <=  s[i-1]; ++j);
			std::swap(s[i-1], rest[j]);

			cout << s.substr(0, i) << rest << endl;
			return;
		}
	}

	cout << "no answer" << endl;
}

int main()
{
	int T;
	cin >> T;

	for(int i = 0; i < T; i++)
		solve();	
}