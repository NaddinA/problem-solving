#include <iostream>
#include <cstdio>
using namespace std;

// SRC: https://www.hackerrank.com/challenges/c-tutorial-functions/problem

int max_of_four(int a, int b, int c, int d)
{
    int max;
    
    (a > b && a > c && a > d) ? max = a : (b > c && b > d) ? max = b : c > d  ? max = c : max = d;
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
