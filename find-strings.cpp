#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

unordered_set<string> strs;

void gen()
{
	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++)
	{
		strs.insert(s.substr(i));
	}
}

vector<int> get_lcp(const vector<string> &sufix)
{
	std::vector<int> v;
	v.push_back(0);
	for(int i = 1; i < sufix.size(); ++i )
	{
		int min = std::min(sufix[i].size(), sufix[i-1].size());
		int j = 0;
		while(j < min && sufix[i][j] == sufix[i-1][j]) ++j;
		v.push_back(j);
	}

	return std::move(v);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
    	gen();
    }

    vector<string> v {strs.begin(), strs.end()};
    std::sort(v.begin(), v.end());

    vector<int> lcp = get_lcp(v);

    vector<int> num_substrs;
    int prev = 0;
    int current = 0;
    for(int i = 0; i < lcp.size(); i++)
    {
    	current = v[i].size() - lcp[i] + prev;
    	num_substrs.push_back(current);
    	prev = current;
    }

    cin >> T;
    for(int i = 0; i < T; ++i)
    {
    	int c;
    	cin >> c;
    	const auto &it = lower_bound(num_substrs.begin(), num_substrs.end(), c);
    	if(it == num_substrs.end()) 
    	{
    		cout << "INVALID" << endl;
    		continue;
    	}

    	int diff = *it - c;
    	int index = it - num_substrs.begin();
    	cout << v[index].substr(0, v[index].size() - diff) << endl;
    }

}
