// SRC: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <stdlib.h>
void update(int *a, int *b) {
    int x, y, z;
    
    x = *a;
    y = *b;
    
    z = x + y;
    *a = z;
    
    *b = abs(x - y);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
