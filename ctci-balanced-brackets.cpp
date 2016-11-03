#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <cctype>
#include <iostream>
#include <unordered_map>
using namespace std;

bool is_open(char ch)
{
	return ch == '[' || ch == '(' || ch == '{';
}

bool are_pairs(char init, char end)
{
	return (init == '[' && end == ']')
  		|| (init == '(' && end == ')')
  		|| (init == '{' && end == '}');
}

bool is_balanced(const string &expression) {
  size_t str_size = expression.size() - 1;
  std::stack<char> pending_open;
  for(char current_char : expression)
  {
  	if(is_open(current_char))
  	{
  		pending_open.push(current_char);
  	}
  	else
  	{
  		if(pending_open.empty()) return false;
  		char op = pending_open.top();
  		pending_open.pop();
  		if(!are_pairs(op, current_char))
  		{
  			return false;
  		}
  	}
  }

  return pending_open.empty();
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
