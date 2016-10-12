#include <cmath>
#include <cstdio>
#include <vector>
#include <array>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

std::array<int, 100000> d;

/* Iterative Function to calculate (x^n)%p in O(logy) */
unsigned long long power(unsigned long long x, unsigned int y, unsigned int p)
{
    unsigned long long res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}


// Basic idea behind the problem is that (a + 1)(b+1)(c+1) = abc + ab + ac + bc + b + c + 1 
// if a = 2^num1 and b = 2^num2 and so on, the multiplication is equals 2^(num1 + num2) so we get 2^(sum of sublist) for all sublist.

int main()
{
	int N;
	cin >> N;
	int break_pos = 0;
	bool sorted = true;
	for (int i = 0; i < N; ++i)
	{
		unsigned long long x ;
		cin >> x;
		d[i] = power(2, x, 1000000007) + 1;
	}
	unsigned long long res = 1;
	for(int i = 0; i < N; ++i)
	{
		res = (d[i] * res) % 1000000007;
	}

	res = (res - 1)% 1000000007;

	cout << res << endl;
}