
#include <string>
#include <iostream>

using namespace std;

#define MAX_LENGTH 5001
int M[MAX_LENGTH][MAX_LENGTH] = { -1 };

int max_child(const string &f, int f_index, const string &s, int s_index)
{
    int f_pos = (int)f.size() - f_index;
    int s_pos = (int)s.size() - s_index;
    
    if (f_pos < 1
        || s_pos< 1) return 0;
    
    if (M[f_pos][s_pos] == -1)
    {
        auto pos = (int)s.find(f[f_index], s_index);
        auto max_c = max_child(f, f_index + 1, s, s_index);
        if (pos != string::npos)
        {
            max_c = std::max( 1  + max_child(f, f_index +1, s, pos + 1), max_c);
        }
        
        M[f_pos][s_pos] = max_c;
    }
    
    return M[f_pos][s_pos];
}

int main() {
    string f;
    string s;
    cin >> f >> s;
    
    for (int i = 0; i < MAX_LENGTH; ++i)
        for (int j = 0; j < MAX_LENGTH; ++j)
            M[i][j] = -1;
    
    cout << max_child(f, 0, s, 0) << endl;
    return 0;
}