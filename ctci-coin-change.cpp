#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define MAX_MONEY 251
#define MAX_COINS 50
long long M[MAX_MONEY][MAX_COINS] = {-1};

long long make_change(vector<int> coins, int money, int coin_index) {
	if(money == 0) return 1;
	if(money < 0) return 0;
	long long result = 0;

    for(int i = coin_index; i < coins.size(); ++i)
    {
    	if(M[money][i] != -1)
    	{
    		result += M[money][i];
    	}
    	else
    	{
    		long long coin_change = make_change(coins, money - coins[i], i);
    		M[money][i] = coin_change;
    		result += coin_change;
    	}
    }

    return result;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> coins(m);
    for(int coins_i = 0;coins_i < m;coins_i++){
       cin >> coins[coins_i];
    }

    for(int i = 0; i < MAX_MONEY; ++i)
       	for(int j = 0; j < MAX_COINS; ++j)
    		M[i][j] = -1;
    
    sort(coins.begin(), coins.end());
    cout << make_change(coins, n, 0) << endl;
    return 0;
}
