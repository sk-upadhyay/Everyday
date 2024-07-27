#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *x,int *y)
{
    int p = *x + *y;
    *y = abs(*x - *y);
    *x=p;
}

int main() {
    int a,b;
    cin>>a>>b;
    int *p = &a,*q = &b;
    update(p,q);
    cout<<a<<" "<<b;
    return 0;
}
