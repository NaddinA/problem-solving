// SRC: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    
	stringstream ss(str);
    vector<int> v;
    char ch;
    int num;
    
    // Keeps extracting ints from str and inserts them into vector
    // overrides extra chars to 'ch' variable until the str is empty, then breaks.
    
    while (ss >> num)
    {
        v.push_back(num);
        ss >> ch;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
