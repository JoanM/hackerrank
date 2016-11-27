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
			sort(s.begin()+i, s.end());
			int j= i;
			for(; j < s.size() && s[j] <=  s[i-1]; ++j);
			std::swap(s[i-1], s[j]);

			cout << s << endl;
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