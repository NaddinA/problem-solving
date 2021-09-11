// SRC: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    
    int a, b;
    
    cin >> a >> b;
    
    string list[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            i % 2 == 0 ? cout << "even\n" : cout << "odd\n";            
        }
        
        else cout << list[i - 1] << endl;
    }
    
    return 0;
}
