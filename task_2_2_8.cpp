#include <bits/stdc++.h>
using namespace std;

unsigned gcd(unsigned a, unsigned b){
    if (a == b) {
        return a;
    }
    if (a > b) {
        long tmp = a;
        a = b;
        b = tmp;
    }
    return gcd(a, b - a);
}


int main(){

    return 0;
}