using System;
using System.Collections.Generic;
using System.IO;
using System.Numerics;
class Solution {
    static void Main(String[] args) {
        BigInteger[] prev_calc = new BigInteger[20];
        var input = Console.ReadLine().Split(' ');
        prev_calc[0] = Int32.Parse(input[0]);
        prev_calc[1] = Int32.Parse(input[1]);
        int N = Int32.Parse(input[2]);
        
        for(int i = 2; i< N; ++i)
        {
            prev_calc[i] = prev_calc[i-2] + prev_calc[i-1] * prev_calc[i-1];    
        }
        
        Console.WriteLine(prev_calc[N - 1]);
        
    }
}