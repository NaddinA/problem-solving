// SRC: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n, q, data, row_size, row_number, data_index;
    cin >> n >> q;
    
    vector<vector<int>> vect(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> row_size;
        for (int j = 0; j < row_size; j++)
        {   cin >> data;
            vect[i].push_back(data);
        }
    }
    
    for (int k = 0; k < q; k++)
    {
        cin >> row_number >> data_index;
        cout << vect[row_number][data_index] << endl;
    }
    
    return 0;
}
