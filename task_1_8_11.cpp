#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    double d = b*b - 4 * a * c;
    if (d < 0) {
        cout << "No real roots";
    } else if (d == 0) cout << -b / (2*a) << " " << -b / (2*a);
    else{
        cout << (-b + sqrt(d)) / (2 * a) << " " << (-b - sqrt(d)) / (2 * a);
    }
    return 0;
}
